@interface NSCFOutputStream : NSOutputStream

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)retain;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (unsigned long long)streamStatus;
- (BOOL)hasSpaceAvailable;
- (void)open;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (unsigned long long)hash;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (BOOL)isEqual:(id)a0;
- (id)initToMemory;
- (void)close;
- (id)streamError;
- (unsigned long long)retainCount;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (BOOL)allowsWeakReference;
- (id)propertyForKey:(id)a0;
- (oneway void)release;
- (id)delegate;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setDelegate:(id)a0;
- (BOOL)retainWeakReference;

@end
