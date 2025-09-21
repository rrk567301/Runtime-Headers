@interface SOKerberosExtensionUserData : NSObject

@property (nonatomic) char useKeychain;
@property (nonatomic) char userSetKeychainChoice;
@property (nonatomic) char useSmartCard;

- (id)init;

@end
