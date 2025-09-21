@class NSRecursiveLock, EAAccessory, EASession;

@interface EAOutputStream : NSOutputStream {
    id _delegate;
    int _sock;
    EAAccessory *_accessory;
    EASession *_session;
    NSRecursiveLock *_statusLock;
    NSRecursiveLock *_runloopLock;
    char _useSocket;
    struct __CFSocket { } *_cfSocket;
    char _isOpenCompletedEventSent;
    char _hasSpaceAvailableEventSent;
    char _hasSpaceAvailable;
    char _isAtEndEventSent;
    unsigned long long _streamStatus;
    struct __CFRunLoop { } *_runLoop;
    struct __CFRunLoopSource { } *_runLoopSource;
    struct __CFRunLoopSource { } *_socketRunLoopSource;
}

- (void)dealloc;
- (id)propertyForKey:(id)a0;
- (void)close;
- (id)delegate;
- (char)hasSpaceAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (char)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)_scheduleCallback;
- (void)_streamEventTrigger;
- (void)_performAtEndOfStreamValidation;
- (void)_accessoryDidDisconnect:(id)a0;
- (void)_streamWriteable;
- (void)endStream;
- (id)initWithAccessory:(id)a0 forSession:(id)a1 socket:(int)a2;
- (id)initWithAccessoryWithoutSocket:(id)a0 forSession:(id)a1;
- (void)openCompleted;

@end
