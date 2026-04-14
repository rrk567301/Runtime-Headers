@class NSData, NSMutableDictionary, NSLock;

@interface NSSocketPort : NSPort {
    struct __CFSocket { } *_receiver;
    NSMutableDictionary *_connectors;
    struct __CFDictionary { } *_loops;
    struct __CFDictionary { } *_data;
    NSData *_signature;
    id _delegate;
    NSLock *_lock;
    unsigned long long _useCount;
    unsigned long long _retainCount;
}

@property (readonly) int protocolFamily;
@property (readonly) int socketType;
@property (readonly) int protocol;
@property (readonly, copy) NSData *address;
@property (readonly) int socket;

+ (void)initialize;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)_fixNSSocketPortLeak;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (unsigned long long)retainCount;
- (id)description;
- (id)init;
- (id)delegate;
- (BOOL)isValid;
- (void)invalidate;
- (void)setDelegate:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)handlePortMessage:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (void)addConnection:(id)a0 toRunLoop:(id)a1 forMode:(id)a2;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (void)handleConnDeath:(id)a0;
- (void)_incrementUseCount;
- (id)signature;
- (id)_initWithRetainedCFSocket:(struct __CFSocket { } *)a0 protocolFamily:(int)a1 socketType:(int)a2 protocol:(int)a3;
- (id)initWithTCPPort:(unsigned short)a0;
- (id)initRemoteWithTCPPort:(unsigned short)a0 host:(id)a1;
- (id)_initRemoteWithSignature:(id)a0;
- (id)initRemoteWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 address:(id)a3;
- (id)initWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 address:(id)a3;
- (id)initWithProtocolFamily:(int)a0 socketType:(int)a1 protocol:(int)a2 socket:(int)a3;
- (struct __CFSocket { } *)_sendingSocketForPort:(id)a0 beforeTime:(double)a1;
- (void)_handleMessage:(struct __CFData { } *)a0 from:(struct __CFData { } *)a1 socket:(struct __CFSocket { } *)a2;

@end
