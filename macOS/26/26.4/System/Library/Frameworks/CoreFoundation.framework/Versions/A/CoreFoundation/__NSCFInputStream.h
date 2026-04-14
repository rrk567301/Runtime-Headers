@interface __NSCFInputStream : NSInputStream

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)streamStatus;
- (BOOL)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; } *)a2;
- (void)open;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)streamError;
- (void)_scheduleInCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (BOOL)_tryRetain;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (id)initWithURL:(id)a0;
- (id)delegate;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (id)propertyForKey:(id)a0;
- (BOOL)_isDeallocating;
- (id)initWithData:(id)a0;
- (BOOL)hasBytesAvailable;
- (BOOL)isEqual:(id)a0;
- (id)retain;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)setDelegate:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (unsigned long long)hash;
- (oneway void)release;
- (void)close;
- (unsigned long long)retainCount;
- (id)initWithFileAtPath:(id)a0;

@end
