@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)dealloc;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (void)_loadAssetData;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (void)_resetGuardedData;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (id)_readAssetData:(id)a0;
- (id)init_;
- (void).cxx_destruct;

@end
