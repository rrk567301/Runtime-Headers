@interface VoiceShortcuts.ToolKitIndexingScheduler : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ xpcEventHandler;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ debouncer;
    void /* unknown type, empty encoding */ linkNotificationHasCanceledIndexing;
    void /* unknown type, empty encoding */ enabled;
}

- (char)reindexWithDebouncer:(id)a0 error:(id *)a1;
- (void)requestReindexAfterFirstUnlock;
- (void)requestReindexForAppIntentsMetadataChangedNotificationWithNotification:(id)a0;
- (void)requestReindexForAppProtectionStateChangeWithNotification:(id)a0;
- (void)requestReindexForDaemonWakeupRequest;
- (void)requestReindexForLanguageChangeWithNotification:(id)a0;

@end
