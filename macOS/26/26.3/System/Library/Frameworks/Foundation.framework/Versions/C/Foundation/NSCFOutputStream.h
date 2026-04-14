@interface NSCFOutputStream : NSOutputStream

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)hasSpaceAvailable;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)retainCount;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)retain;
- (void)close;
- (BOOL)allowsWeakReference;
- (id)streamError;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)init;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)retainWeakReference;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)initToMemory;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (oneway void)release;

@end
