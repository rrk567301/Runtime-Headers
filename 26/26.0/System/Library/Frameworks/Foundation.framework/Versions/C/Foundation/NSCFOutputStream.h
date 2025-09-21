@interface NSCFOutputStream : NSOutputStream

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)hasSpaceAvailable;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (void)setDelegate:(id)a0;
- (id)propertyForKey:(id)a0;
- (unsigned long long)streamStatus;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)retain;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (id)init;
- (void)open;
- (unsigned long long)retainCount;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initToMemory;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (oneway void)release;
- (id)streamError;
- (id)delegate;
- (unsigned long long)hash;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (BOOL)isEqual:(id)a0;
- (void)close;

@end
