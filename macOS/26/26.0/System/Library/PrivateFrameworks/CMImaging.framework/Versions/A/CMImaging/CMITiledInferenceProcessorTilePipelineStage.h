@class NSArray, CMITiledInferenceProcessorNetworkConfig;
@protocol CMITiledInferenceProcessorMetalStage;

@interface CMITiledInferenceProcessorTilePipelineStage : NSObject {
    BOOL _hasConnectingPostToPreMetalStage;
}

@property (retain, nonatomic) id<CMITiledInferenceProcessorMetalStage> preInferenceStage;
@property (retain, nonatomic) CMITiledInferenceProcessorNetworkConfig *networkConfig;
@property (retain, nonatomic) id<CMITiledInferenceProcessorMetalStage> postInferenceStage;
@property (readonly, nonatomic) NSArray *networkInputPorts;
@property (readonly, nonatomic) NSArray *networkOutputPorts;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasConnectingPostToPreMetalStage;
- (void)setHasConnectingPostToPreMetalStage:(BOOL)a0;

@end
