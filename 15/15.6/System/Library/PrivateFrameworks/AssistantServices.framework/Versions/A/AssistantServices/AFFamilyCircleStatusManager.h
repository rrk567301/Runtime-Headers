@interface AFFamilyCircleStatusManager : NSObject

@property char childAccount;

+ (id)sharedManager;
+ (char)isChildAccount;

- (void)dealloc;
- (id)init;
- (void)_fetchChildAccountStatus;
- (void)_observeAccountChanges;
- (void)_observeFamilyChanges;
- (void)fetchChildAccountStatus;

@end
