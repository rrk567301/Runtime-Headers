@class NSString;
@protocol MTLDevice;

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoderSPI>

@property char separateCommits;
@property (readonly) id<MTLDevice> device;
@property (copy) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)endEncoding;
- (id)endEncodingAndRetrieveProgramAddressTable;
- (id)initWithBaseObject:(id)a0 parent:(id)a1;
- (id)initWithParallelRenderCommandEncoder:(id)a0 parent:(id)a1 descriptor:(id)a2;
- (char)isMemorylessRender;
- (id)renderCommandEncoder;
- (id)sampledRenderCommandEncoderWithProgramInfoBuffer:(union { struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x0; struct { unsigned char x0 : 8; unsigned int x1 : 24; unsigned int x2; unsigned long long x3; unsigned long long x4; } x1; } *)a0 capacity:(unsigned long long)a1;
- (void)setColorStoreAction:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setColorStoreActionOptions:(unsigned long long)a0 atIndex:(unsigned long long)a1;
- (void)setDepthStoreAction:(unsigned long long)a0;
- (void)setDepthStoreActionOptions:(unsigned long long)a0;
- (void)setStencilStoreAction:(unsigned long long)a0;
- (void)setStencilStoreActionOptions:(unsigned long long)a0;

@end
