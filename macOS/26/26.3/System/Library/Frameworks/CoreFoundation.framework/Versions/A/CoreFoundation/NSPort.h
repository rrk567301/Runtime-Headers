@interface NSPort : NSObject <NSCopying, NSCoding>

@property (readonly, getter=isValid) BOOL valid;
@property (readonly) unsigned long long reservedSpaceLength;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)a0;

- (void)invalidate;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (unsigned int)machPort;
- (id)replacementObjectForPortCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void)addConnection:(id)a0 toRunLoop:(id)a1 forMode:(id)a2;
- (Class)classForPortCoder;
- (id)initWithMachPort:(unsigned int)a0;
- (void)removeConnection:(id)a0 fromRunLoop:(id)a1 forMode:(id)a2;
- (BOOL)sendBeforeDate:(id)a0 components:(id)a1 from:(id)a2 reserved:(unsigned long long)a3;
- (BOOL)sendBeforeDate:(id)a0 msgid:(unsigned long long)a1 components:(id)a2 from:(id)a3 reserved:(unsigned long long)a4;

@end
