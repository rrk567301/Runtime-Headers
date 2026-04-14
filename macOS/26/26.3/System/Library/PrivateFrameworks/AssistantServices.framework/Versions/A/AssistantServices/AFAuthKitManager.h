@class AKAccountManager;

@interface AFAuthKitManager : NSObject

@property (readonly, nonatomic) AKAccountManager *accountManager;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)currentAccountType;
- (BOOL)isUserSignedIn;
- (BOOL)shouldApplyChildRestrictions;

@end
