@interface VoiceShortcuts.VCDaemonTaskReference : NSObject {
    void /* unknown type, empty encoding */ eventStream;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ eventName;
    void /* unknown type, empty encoding */ priority;
    void /* unknown type, empty encoding */ operation;
}

- (void)registerWithCompletionHandler:(void (^)(void))a0;
- (void).cxx_destruct;
- (id)init;
- (void)unregisterWithCompletionHandler:(void (^)(void))a0;
- (id)initDarwinNotificationTaskWithIdentifier:(id)a0 source:(id)a1 eventName:(id)a2 priority:(long long)a3 operation:(id /* block */)a4;
- (id)initDiskArbitrationTaskWithIdentifier:(id)a0 source:(id)a1 eventName:(id)a2 priority:(long long)a3 operation:(id /* block */)a4;
- (id)initFileSystemTaskWithIdentifier:(id)a0 source:(id)a1 eventName:(id)a2 priority:(long long)a3 operation:(id /* block */)a4;

@end
