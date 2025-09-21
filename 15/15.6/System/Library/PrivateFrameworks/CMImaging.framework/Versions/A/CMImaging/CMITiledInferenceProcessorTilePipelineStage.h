@class CMITiledInferenceProcessorNetworkConfig;
@protocol CMITiledInferenceProcessorMetalStage;

@interface CMITiledInferenceProcessorTilePipelineStage : NSObject {
    char _hasConnectingPostToPreMetalStage;
}

@property (retain, nonatomic) id<CMITiledInferenceProcessorMetalStage> preInferenceStage;
@property (retain, nonatomic) CMITiledInferenceProcessorNetworkConfig *networkConfig;
@property (retain, nonatomic) id<CMITiledInferenceProcessorMetalStage> postInferenceStage;

- (id)init;
- (void).cxx_destruct;
- (char)hasConnectingPostToPreMetalStage;
- (void)setHasConnectingPostToPreMetalStage:(char)a0;

@end
