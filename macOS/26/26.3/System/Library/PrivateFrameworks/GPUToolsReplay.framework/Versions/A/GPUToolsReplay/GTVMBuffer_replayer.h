@class NSString;

@interface GTVMBuffer_replayer : NSObject <GTVMBuffer>

@property (readonly, nonatomic) struct VMBuffer { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *vmBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLength:(unsigned long long)a0;
- (id)initWithLength:(unsigned long long)a0;
- (const void *)bytes;
- (unsigned long long)length;
- (void *)mutableBytes;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (id)subdataWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)initWithVMBuffer:(struct VMBuffer { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *)a0;

@end
