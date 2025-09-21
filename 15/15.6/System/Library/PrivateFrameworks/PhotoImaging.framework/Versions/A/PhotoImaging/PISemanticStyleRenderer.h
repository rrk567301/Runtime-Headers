@class CMISmartStyleMetalRendererV1, FigMetalContext;
@protocol MTLCommandQueue;

@interface PISemanticStyleRenderer : NSObject {
    FigMetalContext *_ctx;
    unsigned long long _sid;
}

@property (readonly, nonatomic) id<MTLCommandQueue> metalCommandQueue;
@property (readonly, nonatomic) int processingType;
@property (readonly, nonatomic) char useStyleEngine;
@property (readonly, nonatomic) CMISmartStyleMetalRendererV1 *processor;

+ (char)usingSharedSemanticStyleRendererWithMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(char)a2 perform:(id /* block */)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(char)a2;
- (char)matchesMetalCommandQueue:(id)a0 processingType:(int)a1 useStyleEngine:(char)a2;
- (char)prepareProcessor;

@end
