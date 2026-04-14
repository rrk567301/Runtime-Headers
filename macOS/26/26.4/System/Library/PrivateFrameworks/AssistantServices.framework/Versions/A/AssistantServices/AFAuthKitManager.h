@class AKAccountManager;

@interface AFAuthKitManager : NSObject

@property (readonly, nonatomic) AKAccountManager *accountManager;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)currentAccountType;
- (BOOL)isUserSignedIn;
- (BOOL)shouldApplyChildRestrictions;

@end
