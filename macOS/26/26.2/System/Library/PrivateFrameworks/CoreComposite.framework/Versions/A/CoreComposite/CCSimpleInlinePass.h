@class MTLLinkedFunctions, NSArray;
@protocol MTLBuffer, MTLRenderPipelineState;

@interface CCSimpleInlinePass : CCSimplePass <CCInlinePass> {
    BOOL _executedInline;
}

@property (copy, nonatomic) id /* block */ executeInPassHandler;
@property (copy, nonatomic) id /* block */ getLinkedFunctionsHandler;
@property (copy, nonatomic) id /* block */ getArgumentBufferHandler;
@property (copy, nonatomic) id /* block */ getResourceUsagesHandler;
@property (copy, nonatomic) id /* block */ setInlineRenderPipelineStateHandler;
@property (nonatomic) struct { unsigned long long width; unsigned long long height; unsigned long long depth; } threadsPerTile;
@property (readonly, nonatomic) MTLLinkedFunctions *linkedFunctions;
@property (readonly, nonatomic) id<MTLBuffer> argumentBuffer;
@property (readonly, nonatomic) NSArray *resourceUsages;
@property (retain, nonatomic) id<MTLRenderPipelineState> inlineRenderPipelineState;

- (void).cxx_destruct;
- (BOOL)executeWithAccelerateDeviceGroup:(id)a0;
- (id)initWithExecutionHandler:(id /* block */)a0;
- (void)passIsExecuteInlineWithTileSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 executedInline:(BOOL)a1;

@end
