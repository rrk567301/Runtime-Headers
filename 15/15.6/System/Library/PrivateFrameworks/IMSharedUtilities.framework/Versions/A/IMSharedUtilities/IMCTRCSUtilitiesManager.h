@interface IMCTRCSUtilitiesManager : NSObject {
    void /* unknown type, empty encoding */ delegate;
}

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (char)carrierRequiresFirstTimeOnAlert;
- (char)carrierRequiresFirstTimeOnAlertForPhoneNumber:(id)a0 simID:(id)a1;
- (char)enabledByDefaultForContext:(id)a0;
- (char)enabledForContext:(id)a0;
- (char)enabledForPhoneNumber:(id)a0 simID:(id)a1;
- (char)groupMessagingEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (long long)groupMessagingMaxGroupSizeForPhoneNumber:(id)a0 simID:(id)a1;
- (char)groupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
- (char)isRBMEnabledForContext:(id)a0;
- (char)isRBMSupportedForContext:(id)a0;
- (char)networkSupportsInterworkingForContext:(id)a0;
- (char)networkSupportsSpamReportingForContext:(id)a0;
- (id)privateIdentityForContext:(id)a0;
- (void)registerServiceCapabilityNotifications;
- (id)revokeIntervalForPhoneNumber:(id)a0 simID:(id)a1;
- (char)supportedForPhoneNumber:(id)a0 simID:(id)a1;

@end
