@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (char)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (char)_isDeallocating;
- (oneway void)release;
- (void)dealloc;
- (char)_tryRetain;
- (id)init;
- (id)name;
- (id)retain;
- (unsigned long long)retainCount;
- (char)isValid;
- (id)delegate;
- (id)initWithName:(id)a0;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (char)setName:(id)a0;
- (id)initWithRemoteName:(id)a0;
- (char)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (char)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (char)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;

@end
