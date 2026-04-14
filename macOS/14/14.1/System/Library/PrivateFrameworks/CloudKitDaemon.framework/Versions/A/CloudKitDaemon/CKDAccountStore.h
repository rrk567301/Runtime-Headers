@interface CKDAccountStore : NSObject

+ (id)sharedAccountStore;
+ (void)invalidatePrimaryAccountCache;
+ (id)sharedPrimaryAccount;

- (id)init;

@end
