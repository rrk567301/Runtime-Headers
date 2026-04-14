@interface NSMachPort : NSPort {
    id _delegate;
    unsigned long long _flags;
    unsigned int _machPort;
    unsigned long long _reserved;
}

@property (readonly) unsigned int machPort;

+ (id)port;
+ (id)portWithMachPort:(unsigned int)a0;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)parseMachMessage:(void *)a0 localPort:(id *)a1 remotePort:(id *)a2 msgid:(unsigned int *)a3 components:(id *)a4;
+ (void)resetAllPorts;
+ (id)portWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
+ (void)_fixNSMachPortLeak;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (BOOL)isMemberOfClass:(Class)a0;
- (unsigned long long)hash;
- (id)init;
- (void)invalidate;
- (BOOL)isValid;
- (id)delegate;
- (unsigned long long)_cfTypeID;
- (void)setDelegate:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addConnection:(id)a0 toRunLoop:(id)a1 forMode:(id)a2;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (void)handlePortMessage:(id)a0;
- (id)initWithMachPort:(unsigned int)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (id)initWithMachPort:(unsigned int)a0 options:(unsigned long long)a1;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;

@end
