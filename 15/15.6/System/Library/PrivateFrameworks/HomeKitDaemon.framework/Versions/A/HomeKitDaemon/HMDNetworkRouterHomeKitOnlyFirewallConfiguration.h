@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration {
    char _isFiltered;
    char _useFallbackForRTP;
    char _useFallbackForHDS;
}

+ (id)fallbackConfigurationForRuleset:(id)a0;
+ (id)fallbackIdentifier;

- (id)description;
- (id)initWithAccessory:(id)a0 sourceConfiguration:(id)a1;

@end
