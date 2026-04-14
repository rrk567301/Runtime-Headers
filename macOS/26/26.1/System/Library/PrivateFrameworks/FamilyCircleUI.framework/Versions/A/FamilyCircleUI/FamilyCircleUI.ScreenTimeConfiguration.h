@class NSNumber, NSError;

@interface FamilyCircleUI.ScreenTimeConfiguration : NSObject <FamilyCircleUI.ScreenTimeConfigurationProtocol> {
    void /* unknown type, empty encoding */ stManagementState;
}

- (void)isContentPrivacyEnabledForDSID:(NSNumber *)a0 completionHandler:(void (^)(NSNumber *, NSError *))a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isRestrictedForFeature:(id)a0;

@end
