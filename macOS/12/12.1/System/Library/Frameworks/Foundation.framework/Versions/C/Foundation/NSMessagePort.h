@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;
+ (void)_fixNSMessagePortLeak;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (id)init;
- (id)name;
- (void)invalidate;
- (BOOL)isValid;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setName:(id)a0;
- (id)initWithName:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;
- (id)initWithRemoteName:(id)a0;

@end
