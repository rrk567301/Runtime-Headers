@class NSXPCConnection;

@interface ATXModeEntityScorerClient : NSObject <ATXModeEntityScorerInterface> {
    NSXPCConnection *_xpcConnection;
}

- (void)rankedContactsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)dealloc;
- (void)scoreContactsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreAppsForDenyList:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (id)init;
- (void)scoreContacts:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)scoreApps:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)modeEntityScoresFromCacheForModeEntityTypeIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationType:(long long)a2 reply:(id /* block */)a3;
- (void)rankedAppsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedContactsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedWidgetsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedAppsForNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)rankedNotificationsForMode:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)scoreNotifications:(id)a0 mode:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)assignModeEntityScores:(unsigned long long)a0 entityTypeIdentifier:(id)a1 entityIdentifier:(id)a2 score:(double)a3 modeConfigurationType:(long long)a4 reply:(id /* block */)a5;
- (void)rankedContactsForDenyListForMode:(unsigned long long)a0 options:(unsigned long long)a1 reply:(id /* block */)a2;
- (void).cxx_destruct;

@end
