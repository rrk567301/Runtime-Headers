@interface NSCFOutputStream : NSOutputStream

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (unsigned long long)streamStatus;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (BOOL)retainWeakReference;
- (void)open;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)hasSpaceAvailable;
- (id)initToMemory;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)streamError;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)allowsWeakReference;
- (id)delegate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (unsigned long long)hash;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)init;
- (oneway void)release;
- (void)close;
- (unsigned long long)retainCount;

@end
