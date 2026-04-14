@interface SUDeferredUpdateManager : NSObject

- (id)sharedDeferredUpdateManager;
- (void)updateProductsWithCatalog:(id)a0;
- (BOOL)deferralIsActive;
- (long long)autoDeferralTimespanInDays;
- (long long)managedDeferralTimespanInDays;
- (id)deferralWhitelist;
- (id)deferralBlacklist;

@end
