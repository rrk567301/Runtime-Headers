@class NSString, NSDictionary;
@protocol MTLCommandBuffer;

@interface CRGNodeRender : NSObject <CRGNodeRender> {
    struct { void /* unknown type, empty encoding */ offset; } _dispatchInfo;
    id<MTLCommandBuffer> _commandBuffer;
    void /* unknown type, empty encoding */ _outputSize;
    void /* unknown type, empty encoding */ _pixelsPerThread;
    NSDictionary *_textures;
}

@property (readonly, nonatomic) struct { } dispatchInfo;
@property (readonly, nonatomic) id<MTLCommandBuffer> commandBuffer;
@property (readonly, nonatomic) void /* unknown type, empty encoding */ outputSize;
@property (readonly, nonatomic) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } dispatchThreads;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)setCommandBuffer:(id)a0;
- (id)init;
- (void)setTextures:(id)a0;
- (void).cxx_destruct;
- (void)setOutputSize:(SEL)a0;
- (id)getRenderTextureWithName:(id)a0;
- (id)getTextureDictionary;
- (id)getTextures;
- (void)setDispatchInfo:(struct { })a0;
- (void)setDispatchInfoBuffer:(id)a0 atIndex:(unsigned long long)a1;
- (void)setPixelsPerThread:(SEL)a0;
- (void)setTextureArgs:(id)a0 encoder:(id)a1 atBufferIndex:(unsigned long long)a2;

@end
