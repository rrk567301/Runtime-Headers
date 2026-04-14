@class NSString;
@protocol MTLComputePipelineState, MTLBuffer;

@interface CMIStyleEngineCoefficientsIIRFiltering : NSObject <CMIStyleEngineProcessingStage> {
    id<MTLComputePipelineState> _iirPipelineState;
    float _historyFactor;
    float _targetHistoryFactor;
    float _rampUpStep;
}

@property (retain, nonatomic) id<MTLBuffer> filteredCoefficients;
@property (retain, nonatomic) id<MTLBuffer> computedCoefficients;
@property (nonatomic) BOOL filteredCoefficientsBufferEmpty;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
