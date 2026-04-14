@class NSArray, NSString, FigMetalContext, CRGGraph;
@protocol MTLComputePipelineState;

@interface CMITileEngine : NSObject <CRGPlan, CRGRender> {
    FigMetalContext *_metal;
    CRGGraph *_graph;
    NSArray *_coalescedOutputs;
    id<MTLComputePipelineState> _kernelPrepareTexture;
    BOOL _debugLogging;
    BOOL _debugOutput;
    BOOL _debugPrepareOutputs;
    unsigned int _debugInvalidBorder;
}

@property (readonly, nonatomic) NSArray *ops;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0;
- (void)setDebugOutput:(BOOL)a0;
- (int)allocateForRender;
- (unsigned int)debugInvalidBorder;
- (BOOL)debugLogging;
- (BOOL)debugOutput;
- (BOOL)debugPrepareOutputs;
- (int)dryRunAllocations:(unsigned long long *)a0;
- (void)dumpPlanToLog;
- (void)parseCoalescedOutputs;
- (BOOL)planSolutionWithConstraints:(id)a0 graph:(id)a1 error:(id *)a2;
- (void)prepareNodeRenderTexture:(id)a0 commandBuffer:(id)a1;
- (void)prepareTexture:(id)a0 commandBuffer:(id)a1;
- (void)prepareTexture:(id)a0 info:(struct { })a1 commandBuffer:(id)a2;
- (int)renderAll;
- (void)setDebugInvalidBorder:(unsigned int)a0;
- (void)setDebugLogging:(BOOL)a0;
- (void)setDebugPrepareOutputs:(BOOL)a0;
- (BOOL)verifyGraphPorts;

@end
