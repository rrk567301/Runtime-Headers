@class NSString, MTLGPUDebugImageData, NSArray;
@protocol MTLRenderPipelineState, MTLFunctionLogDebugLocation, MTLComputePipelineState, MTLFunction;

@interface MTLGPUDebugGPULog : NSObject <MTLFunctionLog>

@property (readonly, nonatomic) NSString *locationDescription;
@property (readonly, nonatomic) NSString *functionDescription;
@property (retain, nonatomic) MTLGPUDebugImageData *image;
@property (retain, nonatomic) NSArray *errorStackTrace;
@property (nonatomic) unsigned long long callIndex;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *encoderLabel;
@property (retain, nonatomic) id<MTLFunction> function;
@property (nonatomic) unsigned long long functionType;
@property (retain, nonatomic) NSString *functionName;
@property (retain, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation;
@property (retain, nonatomic) NSString *pipelineIdentifier;
@property (retain, nonatomic) id<MTLComputePipelineState> computePipeline;
@property (retain, nonatomic) id<MTLRenderPipelineState> renderPipeline;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
