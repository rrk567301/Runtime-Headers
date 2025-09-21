@class NSUserDefaults, ATXLockscreenBlacklist, ATXActionNotificationServer;

@interface ATXLockscreenSuggestionSender : NSObject {
    ATXLockscreenBlacklist *_lockscreenBlacklist;
    ATXActionNotificationServer *_actionNotificationServer;
    NSUserDefaults *_userDefaults;
}

- (void)_updateCachedExecutableIdentifierWithSuggestion:(id)a0;
- (id)init;
- (void)blendingLayerDidUpdateLockscreenUICache:(id)a0;
- (id)initWithLockscreenBlacklist:(id)a0 actionNotificationServer:(id)a1 userDefaults:(id)a2;
- (id)_cachedExecutableIdentifier;
- (void).cxx_destruct;

@end
