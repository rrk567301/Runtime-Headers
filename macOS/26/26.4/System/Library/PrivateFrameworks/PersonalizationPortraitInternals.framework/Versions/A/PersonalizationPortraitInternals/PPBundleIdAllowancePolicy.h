@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (id)init_;
- (BOOL)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (void)_loadAssetData;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (void).cxx_destruct;
- (BOOL)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (id)_readAssetData:(id)a0;
- (BOOL)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (void)_resetGuardedData;
- (void)dealloc;

@end
