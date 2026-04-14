@class CRNeuralRecognizerConfiguration, NSUUID, CRPerformanceStatistics;

@interface CRNeuralTextRecognizer : NSObject <CRConfidenceThresholdProviding> {
    void /* unknown type, empty encoding */ featureProvider;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ textDecoder;
}

@property (nonatomic, readonly) CRPerformanceStatistics *inferenceStats;
@property (nonatomic, readonly) CRPerformanceStatistics *decodingStats;
@property (nonatomic) BOOL unloadResourcesWhenNotInUse;
@property (nonatomic, retain) CRNeuralRecognizerConfiguration *configuration;
@property (nonatomic, retain) NSUUID *owner;
@property (nonatomic) long long resourceUsers;

- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_unloadResources;
- (void)_releaseIntermediateResources;
- (id)initWithConfiguration:(id)a0 owner:(id)a1;
- (id)thresholdsForTextRegion:(id)a0 withLocale:(id)a1;

@end
