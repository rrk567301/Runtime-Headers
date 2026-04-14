@class NSString, NSXPCListener, _PASLazyPurgeableResult;

@interface ATXModeEntityScorerServer : NSObject <ATXModeEntityScorerInterface, NSXPCListenerDelegate> {
    NSXPCListener *_listener;
    _PASLazyPurgeableResult *_lazyStableContactRepresentationDataStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreEntitiesForDenyList:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 modeConfigurationType:(long long)a4 reply:(id /* block */)a5;
- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2 reply:(id /* block */)a3;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)dataFromFileHandle:(id)a0;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (BOOL)saveScoredEntitiesToDisk:(id)a0 mode:(id)a1 modeEntityTypeIdentifier:(id)a2 modeConfigurationType:(long long)a3;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)initWithContactStoreProvider:(id /* block */)a0;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedWidgetsForMode:(unsigned long long)a0;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (void)rankedNotificationsForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;
- (id)rankedContactsForMode:(unsigned long long)a0;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)dealloc;
- (id)emptyModeEntityScore;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (void)scoreNotificationModeEntity:(id)a0 modeEntityScores:(id)a1;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 modeConfigurationType:(long long)a2 options:(unsigned long long)a3;
- (id)rankedAppsForDenyListForMode:(unsigned long long)a0;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (id)scoredNotificationEntityForAppFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2 modeConfigurationType:(long long)a3;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)scoredNotificationEntityForContactFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedNotificationsForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 options:(unsigned long long)a2;
- (id)rankedEntitiesForDenyListForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 options:(unsigned long long)a2;
- (id)rankedContactsForMode:(unsigned long long)a0 options:(unsigned long long)a1;

@end
