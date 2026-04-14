@class NSString, ACAccount, NSNumber, NSError;

@interface ScreenTimeCore.STAMSStorefrontClient : _TtCs12_SwiftObject <STAMSStorefrontClientProtocol>

- (void)storefrontForChildWithDSID:(NSNumber *)a0 parentAccount:(ACAccount *)a1 withCompletionHandler:(void (^)(NSString *, NSError *))a2;
- (void)activeiTunesAccountWithCompletionHandler:(void (^)(ACAccount *, NSError *))a0;
- (void)bagCountryCodeWithCompletionHandler:(void (^)(NSString *, NSError *))a0;

@end
