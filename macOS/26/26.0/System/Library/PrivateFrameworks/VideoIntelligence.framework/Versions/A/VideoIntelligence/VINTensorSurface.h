@class VINTensorDescriptor;

@interface VINTensorSurface : NSObject

@property (readonly, nonatomic) VINTensorDescriptor *descriptor;
@property (readonly, nonatomic) struct __IOSurface { } *surface;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDescriptor:(id)a0 ioSurface:(struct __IOSurface { } *)a1 error:(id *)a2;

@end
