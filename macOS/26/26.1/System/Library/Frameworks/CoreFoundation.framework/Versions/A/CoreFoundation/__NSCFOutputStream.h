@interface __NSCFOutputStream : NSOutputStream

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)streamError;
- (unsigned long long)streamStatus;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)initToFileAtPath:(id)a0 append:(BOOL)a1;
- (id)retain;
- (long long)write:(const char *)a0 maxLength:(unsigned long long)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (unsigned long long)hash;
- (id)initWithURL:(id)a0 append:(BOOL)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;
- (void)open;
- (id)delegate;
- (oneway void)release;
- (void)close;
- (void)setDelegate:(id)a0;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (id)initToBuffer:(char *)a0 capacity:(unsigned long long)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (BOOL)_isDeallocating;
- (id)initToMemory;
- (BOOL)isEqual:(id)a0;
- (BOOL)hasSpaceAvailable;

@end
