@interface LACSecureStorageConfiguration : NSObject

@property (readonly, nonatomic) char bypassEntitlementChecks;

- (id)initWithBypassEntitlementChecks:(char)a0;

@end
