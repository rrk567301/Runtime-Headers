@class NSString;
@protocol MTLCommandQueue, MTLDevice, MTL4CommandQueue;

@interface MTLCaptureScope : _MTLObjectWithLabel <MTLCaptureScope>

@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTLDevice> device;
@property (readonly, nonatomic) id<MTLCommandQueue> commandQueue;
@property (readonly, nonatomic) id<MTL4CommandQueue> mtl4CommandQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endScope;
- (id)initWithDevice:(id)a0 mtl4CommandQueue:(id)a1;
- (void)dealloc;
- (void)beginScope;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1;

@end
