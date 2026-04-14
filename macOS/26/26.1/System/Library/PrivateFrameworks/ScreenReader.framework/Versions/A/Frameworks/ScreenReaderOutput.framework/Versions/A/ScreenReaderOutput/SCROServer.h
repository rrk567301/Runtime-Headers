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
    BOOL _isRegisteredWithMach;
    BOOL _shouldStayAliveAfterLastClientUnregisters;
}

@property (class, readonly) SCROServer *sharedServer;

- (id)delegate;
- (void)setDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (struct __CFRunLoopSource { } *)serverSource;
- (long long)_clientCount;
- (struct __CFRunLoopTimer { } *)_deathTimer;
- (void)_deleteOldResources;
- (BOOL)_ensureResourcesExist;
- (long long)_incrementClientCount;
- (int)_registerForNotificationOnDeathPort:(unsigned int)a0;
- (BOOL)_registerWithMachServiceName:(char *)a0;
- (void)_setClientCount:(long long)a0;
- (void)_setShouldStayAliveAfterLastClientUnregisters:(BOOL)a0;
- (BOOL)_shouldStayAliveAfterLastClientUnregisters;
- (BOOL)isRegisteredWithMach;
- (BOOL)registerWithMach;
- (void)unregisterWithMach;

@end
