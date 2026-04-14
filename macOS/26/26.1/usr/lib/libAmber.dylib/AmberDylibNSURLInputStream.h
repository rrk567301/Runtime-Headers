@interface AmberDylibNSURLInputStream : NSInputStream

@property (readonly, nonatomic) void *amberRequest;
@property (nonatomic) unsigned long long status;

- (unsigned long long)streamStatus;
- (void)_scheduleInCFRunLoop:(id)a0 forMode:(id)a1;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)_unscheduleFromCFRunLoop:(struct __CFRunLoop { } *)a0 forMode:(struct __CFString { } *)a1;
- (id)propertyForKey:(id)a0;
- (void)open;
- (void)close;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void)_setCFClientFlags:(unsigned long long)a0 callback:(void /* function */ *)a1 context:(struct { long long x0; void *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; })a2;
- (BOOL)hasBytesAvailable;
- (id)initWithAmberRequest:(void *)a0;

@end
