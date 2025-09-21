@interface VoiceShortcuts.ShortcutSpotlightCoordinator : NSObject <WFDatabaseObjectObserver, WFSpotlightDomainsCleanerObserver> {
    void /* unknown type, empty encoding */ indexer;
    void /* unknown type, empty encoding */ databaseProvider;
    void /* unknown type, empty encoding */ differ;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ cleaner;
}

- (id)init;
- (void)databaseDidChange:(id)a0 modified:(id)a1 inserted:(id)a2 removed:(id)a3;
- (void).cxx_destruct;
- (void)domainCleanerDidClearDomains:(id)a0;
- (void)handleToolKitDatabaseChangedNotificationWithNotification:(id)a0;

@end
