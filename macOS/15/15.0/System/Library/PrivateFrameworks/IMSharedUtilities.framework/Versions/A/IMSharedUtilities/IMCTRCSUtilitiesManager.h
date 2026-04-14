@interface IMCTRCSUtilitiesManager : NSObject

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)carrierRequiresFirstTimeOnAlert;
- (BOOL)carrierRequiresFirstTimeOnAlertForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)enabledForContext:(id)a0;
- (BOOL)enabledForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)groupMessagingEnabledForPhoneNumber:(id)a0 simID:(id)a1;
- (long long)groupMessagingMaxGroupSizeForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)groupTextReplicationSupportedForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)isRBMEnabledForContext:(id)a0;
- (BOOL)isRBMSupportedForContext:(id)a0;
- (void)registerServiceCapabilityNotifications;
- (id)revokeIntervalForPhoneNumber:(id)a0 simID:(id)a1;
- (BOOL)supportedForPhoneNumber:(id)a0 simID:(id)a1;

@end
