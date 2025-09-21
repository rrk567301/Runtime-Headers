@class _PASLock;
@protocol TRINotificationToken;

@interface PPBundleIdAllowancePolicy : NSObject {
    _PASLock *_allowancePolicyLock;
    id<TRINotificationToken> _trialToken;
}

+ (id)defaultPolicy;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init_;
- (id)_readAssetData:(id)a0;
- (void)_loadAssetData;
- (void)_resetGuardedData;
- (void)_setGuardedDataWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;
- (char)bundleIdentifierIsAllowed:(id)a0 blocklist:(id)a1 allowlist:(id)a2;
- (char)bundleIdentifierIsAllowedForNotifications:(id)a0;
- (char)bundleIdentifierIsAllowedForSearchableItems:(id)a0;
- (id)initWithNotificationBlocklist:(id)a0 notificationAllowlist:(id)a1 searchableItemBlocklist:(id)a2 searchableItemAllowlist:(id)a3;

@end
