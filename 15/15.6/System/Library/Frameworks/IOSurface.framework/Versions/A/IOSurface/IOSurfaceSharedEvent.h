@interface IOSurfaceSharedEvent : NSObject <NSSecureCoding> {
    const unsigned long long *_signaledValue;
    unsigned long long _eventOptions;
}

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long signaledValue;
@property (readonly) unsigned int eventPort;
@property (readonly) unsigned long long globalTraceObjectID;
@property (readonly) char supportsRollback;
@property (readonly) char supportsLowLatencySignalAndWait;

- (void)dealloc;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithOptions:(unsigned long long)a0;
- (void)notifyListener:(id)a0 atValue:(unsigned long long)a1 block:(id /* block */)a2;
- (char)waitUntilSignaledValue:(unsigned long long)a0 timeoutMS:(unsigned long long)a1;
- (id)initWithMachPort:(unsigned int)a0;

@end
