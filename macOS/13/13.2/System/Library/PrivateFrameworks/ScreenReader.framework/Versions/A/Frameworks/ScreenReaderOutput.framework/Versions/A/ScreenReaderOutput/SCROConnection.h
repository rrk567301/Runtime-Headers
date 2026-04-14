@interface SCROConnection : NSObject <NSSecureCoding> {
    unsigned int _pingPort;
    struct __CFRunLoopSource { } *_pingSource;
    struct __CFRunLoopSource { } *_invalidationSource;
    unsigned int _identifier;
    int _handlerType;
    id _delegate;
    _Atomic BOOL _isConnectionStarted;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;
+ (void)_createConnectionRunLoop;
+ (BOOL)inUnitTests;
+ (void)_configServer;
+ (void)_configServerWithMachServiceName:(char *)a0;
+ (void)_unconfigServerAndRetry:(BOOL)a0;
+ (void)_addConnectionToRunLoop:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (int)sendEvent:(id)a0;
- (void)_stopConnection;
- (id)initWithHandlerType:(int)a0 delegate:(id)a1;
- (void)_startConnection;
- (int)registerHandlerCallbackForKey:(int)a0;
- (int)setHandlerValue:(id)a0 forKey:(int)a1;
- (id)handlerArrayValueForKey:(int)a0;
- (id)handlerValueForKey:(int)a0;
- (id)handlerValueForKey:(int)a0 withObject:(id)a1;
- (int)performHandlerActionForKey:(int)a0;
- (void)_ping;

@end
