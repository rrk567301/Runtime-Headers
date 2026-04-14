@class NSSet;

@interface IntelligenceFlowPlannerSupport.SbertQuantizedEmbeddingModelInput : _TtCs12_SwiftObject <MLFeatureProvider> {
    void /* unknown type, empty encoding */ token_ids;
    void /* unknown type, empty encoding */ padding_mask;
}

@property (nonatomic, readonly) NSSet *featureNames;

- (id)featureValueForName:(id)a0;

@end
