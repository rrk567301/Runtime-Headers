@interface VoiceShortcuts.DaemonTaskScheduler : _TtCs12_SwiftObject <VCDaemonTaskScheduler> {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ eventObserversByDescriptor;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sources;
    void /* unknown type, empty encoding */ activeTransactions;
}

- (void)scheduleTaskWithIdentifier:(id)a0 priority:(long long)a1 operation:(id /* block */)a2;
- (void)scheduleTaskWithIdentifier:(id)a0 priority:(long long)a1 operation:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
