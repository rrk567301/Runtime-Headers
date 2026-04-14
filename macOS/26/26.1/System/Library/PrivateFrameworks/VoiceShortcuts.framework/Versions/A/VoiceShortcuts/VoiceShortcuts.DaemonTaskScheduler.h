@interface VoiceShortcuts.DaemonTaskScheduler : _TtCs12_SwiftObject <VCDaemonTaskScheduler> {
    void /* unknown type, empty encoding */ executor;
    void /* unknown type, empty encoding */ eventObserversByDescriptor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sources;
}

- (void)executeAsyncTaskWithIdentifier:(id)a0 priority:(long long)a1 handler:(id /* block */)a2;

@end
