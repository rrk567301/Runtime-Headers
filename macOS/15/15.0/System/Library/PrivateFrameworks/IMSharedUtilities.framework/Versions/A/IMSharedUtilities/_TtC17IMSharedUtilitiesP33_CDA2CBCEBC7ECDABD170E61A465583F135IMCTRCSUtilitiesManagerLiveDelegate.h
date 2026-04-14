@interface _TtC17IMSharedUtilitiesP33_CDA2CBCEBC7ECDABD170E61A465583F135IMCTRCSUtilitiesManagerLiveDelegate : NSObject <IMCTRCSUtilitiesManagerDelegate> {
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)copyCarrierBundleValueForSubscriptionContext:(id)a0 keyHierarchy:(id)a1 defaultValue:(id)a2 valueIfError:(id)a3;
- (BOOL)enabledByDefaultForContext:(id)a0;
- (BOOL)getBoolFromDomain:(id)a0 forKey:(id)a1 defaultValue:(BOOL)a2;
- (void)registerServiceCapabilityNotifications;
- (id)revokeIntervalForPhoneNumber:(id)a0 simID:(id)a1;
- (void)setBool:(BOOL)a0 forDomain:(id)a1 forKey:(id)a2;
- (id)subscriptionContextForForSimID:(id)a0 phoneNumber:(id)a1;
- (id)subscriptionsWithRCSSupport;
- (BOOL)supportedForPhoneNumber:(id)a0 simID:(id)a1;

@end
