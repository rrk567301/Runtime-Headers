@interface NSMessagePort : NSPort {
    void *_port;
    id _delegate;
}

+ (void)_fixNSMessagePortLeak;
+ (BOOL)sendBeforeTime:(double)a0 streamData:(id)a1 components:(id)a2 to:(id)a3 from:(id)a4 msgid:(unsigned int)a5 reserved:(unsigned long long)a6;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)invalidate;
- (id)retain;
- (BOOL)_isDeallocating;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)setName:(id)a0;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (BOOL)isValid;
- (id)name;
- (id)initWithName:(id)a0;
- (oneway void)release;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)initWithRemoteName:(id)a0;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;
- (BOOL)sendBeforeTime:(double)a0 streamData:(void *)a1 components:(id)a2 from:(id)a3 msgid:(unsigned int)a4;

@end
