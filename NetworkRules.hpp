#ifndef NETWORK_RULES_HPP
#define NETWORK_RULES_HPP

#include <map>
#include <boost/range/iterator_range.hpp>
#include "ReactionRule.hpp"
#include "generator.hpp"

class NetworkRules
{
public:
    typedef ReactionRule reaction_rule_type;
    typedef SpeciesTypeID species_id_type;
    typedef abstract_limited_generator<reaction_rule_type> reaction_rule_generator;

public:
    virtual void add_reaction_rule(ReactionRule const&) = 0;
    virtual void remove_reaction_rule(ReactionRule const&) = 0;

    virtual reaction_rule_generator* query_reaction_rule(species_id_type const& r1) const = 0;

    virtual reaction_rule_generator* query_reaction_rule(species_id_type const& r1, species_id_type const& r2) const = 0;

    virtual ~NetworkRules() = 0;
};

#endif /* NETWORK_RULES_HPP */
