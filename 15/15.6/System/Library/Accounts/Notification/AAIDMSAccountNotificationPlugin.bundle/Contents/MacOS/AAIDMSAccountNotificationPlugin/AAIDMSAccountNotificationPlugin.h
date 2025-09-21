@class NSString;

@interface AAIDMSAccountNotificationPlugin : NSObject <ACDAccountNotificationPlugin>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (char)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_enableDataclassesForVerifiedEmailOnAppleAccount:(id)a0 inStore:(id)a1;
- (unsigned long long)_newRepairStateOnAuthKitAccount:(id)a0 vsOldAccount:(id)a1;
- (char)_shouldForceRenewCredentialsForAccount:(id)a0 inStore:(id)a1 oldAccount:(id)a2;
- (void)_updateAppleAccountInformationProperties:(id)a0;
- (char)_verifiedEmailForAccount:(id)a0 fromOldAccount:(id)a1;
- (char)updateAppleAccount:(id)a0 withRepairState:(unsigned long long)a1 store:(id)a2;

@end
