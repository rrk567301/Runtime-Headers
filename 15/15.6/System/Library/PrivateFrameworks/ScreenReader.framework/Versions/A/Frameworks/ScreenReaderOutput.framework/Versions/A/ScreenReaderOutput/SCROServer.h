@class NSLock;
@protocol SCROServerDelegate;

@interface SCROServer : NSObject {
    NSLock *_contentLock;
    id<SCROServerDelegate> _delegate;
    struct __CFRunLoopSource { } *_serverSource;
    struct __CFRunLoopSource { } *_deathSource;
    struct __CFRunLoopTimer { } *_deathTimer;
    unsigned int _serverPort;
    unsigned int _deathPort;
    long long _clientCount;
    char _isRegisteredWithMach;
}

@property (class, readonly) SCROServer *sharedServer;

- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (struct __CFRunLoopSource { } *)serverSource;
- (long long)_clientCount;
- (struct __CFRunLoopTimer { } *)_deathTimer;
- (void)_deleteOldResources;
- (char)_ensureResourcesExist;
- (long long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)a0;
- (char)_registerWithMachServiceName:(char *)a0;
- (void)_setClientCount:(long long)a0;
- (char)isRegisteredWithMach;
- (char)registerWithMach;
- (void)unregisterWithMach;

@end
