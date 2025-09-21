@interface NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (char)automaticallyNotifiesObserversForKey:(id)a0;

- (oneway void)release;
- (char)allowsWeakReference;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)retain;
- (unsigned long long)retainCount;
- (char)retainWeakReference;
- (id)propertyForKey:(id)a0;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (char)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)close;
- (id)delegate;
- (char)hasSpaceAvailable;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (id)initToFileAtPath:(id)a0 append:(char)a1;
- (id)initToMemory;
- (id)initWithURL:(id)a0 append:(char)a1;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (char)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;

@end
