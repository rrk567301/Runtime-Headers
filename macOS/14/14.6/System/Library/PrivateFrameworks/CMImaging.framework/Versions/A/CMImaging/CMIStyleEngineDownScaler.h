@class NSString;
@protocol MTLTexture, MTLComputePipelineState;

@interface CMIStyleEngineDownScaler : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _downScalerPipelineState;
}

@property (retain, nonatomic) id<MTLTexture> inputTexture;
@property (retain, nonatomic) id<MTLTexture> outputTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
