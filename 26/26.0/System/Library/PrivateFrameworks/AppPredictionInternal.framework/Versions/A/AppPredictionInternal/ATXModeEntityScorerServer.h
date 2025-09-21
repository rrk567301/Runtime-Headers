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

- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2 modeConfigurationType:(long long)a3;
- (id)emptyModeEntityScore;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0;
- (id)rankedContactsForMode:(unsigned long long)a0;
- (id)rankedNotificationsForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)initWithContactStoreProvider:(id /* block */)a0;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)dataFromFileHandle:(id)a0;
- (id)rankedWidgetsForMode:(unsigned long long)a0;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)scoredNotificationEntityForAppFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (id)init;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 options:(unsigned long long)a2;
- (void)scoreEntities:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedNotificationsForMode:(unsigned long long)a0;
- (id)rankedAppsForDenyListForMode:(unsigned long long)a0;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2 reply:(id /* block */)a3;
- (id)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (id)rankedEntitiesForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 modeConfigurationType:(long long)a2 options:(unsigned long long)a3;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)scoredNotificationEntityForContactFromNotificationEntity:(id)a0 notificationScores:(id)a1;
- (void)scoreEntitiesForDenyList:(id)a0 entityTypeIdentifier:(id)a1 mode:(unsigned long long)a2;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)rankedContactsForMode:(unsigned long long)a0 options:(unsigned long long)a1;
- (BOOL)saveScoredEntitiesToDisk:(id)a0 mode:(id)a1 modeEntityTypeIdentifier:(id)a2 modeConfigurationType:(long long)a3;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)pathForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2;
- (id)rankedAppsForMode:(unsigned long long)a0;
- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 modeConfigurationType:(long long)a4 reply:(id /* block */)a5;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)rankedEntitiesForDenyListForMode:(unsigned long long)a0 entityTypeIdentifier:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)scoreNotificationModeEntity:(id)a0 modeEntityScores:(id)a1;

@end
