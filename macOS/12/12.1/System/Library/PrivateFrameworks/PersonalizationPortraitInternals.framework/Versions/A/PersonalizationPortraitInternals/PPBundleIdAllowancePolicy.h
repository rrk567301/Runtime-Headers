@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (id)init_;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void)_loadAssetData;
- (id)_readAssetData:(id)a0;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void)_resetGuardedData;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;

@end
