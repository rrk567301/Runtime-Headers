@interface AFFamilyCircleStatusManager : NSObject

@property unsigned long long currentAccountType;

+ (void)prewarm;
+ (id)sharedManager;
+ (BOOL)isChildAccount;
+ (unsigned long long)currentAccountType;
+ (BOOL)shouldApplyRestrictions;

- (id)init;
- (void)dealloc;
- (void)_fetchChildAccountStatusWithCompletion:(id /* block */)a0;
- (void)_observeAccountChanges;
- (void)_observeFamilyChanges;
- (void)fetchChildAccountStatus;
- (void)fetchChildAccountStatusWithCompletion:(id /* block */)a0;

@end
