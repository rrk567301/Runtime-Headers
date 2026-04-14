@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (BOOL)isValid;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (void)setDelegate:(id)a0;
- (void)invalidate;
- (BOOL)_tryRetain;
- (BOOL)setName:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (id)init;
- (unsigned long long)retainCount;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)name;
- (oneway void)release;
- (id)initWithName:(id)a0;
- (id)delegate;
- (id)initWithRemoteName:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;

@end
