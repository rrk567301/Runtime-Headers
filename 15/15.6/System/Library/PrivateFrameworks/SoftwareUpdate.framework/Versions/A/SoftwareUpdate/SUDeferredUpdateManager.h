@interface SUDeferredUpdateManager : NSObject

- (long long)autoDeferralTimespanInDays;
- (id)deferralBlacklist;
- (char)deferralIsActive;
- (id)deferralWhitelist;
- (long long)managedDeferralTimespanInDays;
- (id)sharedDeferredUpdateManager;
- (void)updateProductsWithCatalog:(id)a0;

@end
