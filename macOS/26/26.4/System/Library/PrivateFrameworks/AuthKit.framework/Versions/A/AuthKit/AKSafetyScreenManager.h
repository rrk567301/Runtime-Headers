@class AKAccountManager;

@interface AKSafetyScreenManager : NSObject

@property (retain, nonatomic) AKAccountManager *accountManager;

- (id)initWithAccountManager:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_hasSeenSafetyScreenForAccount:(id)a0;
- (void)markSafetyScreenSeenForAccount:(id)a0;
- (BOOL)_safetyScreenEligibilityForAccount:(id)a0;
- (void)_setSafetyScreenSeen:(BOOL)a0 forAccount:(id)a1;
- (BOOL)shouldShowSafetyScreenForAccount:(id)a0;

@end
