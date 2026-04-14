@class CBHistogramBuilder2D, NSMutableDictionary;

@interface ConfidenceEstimatorStats : NSObject {
    NSMutableDictionary *_edgeMappingStrength;
    NSMutableDictionary *_edgeMappingConfidence;
    unsigned int _modelID;
}

@property (readonly) CBHistogramBuilder2D *outputsCE;

- (void)dealloc;
- (void)submit;
- (void)collectStrength:(float)a0 andConfidence:(float)a1;
- (id)initWithModelID:(unsigned int)a0;

@end
