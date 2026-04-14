@class PETEventTracker2, NSString;
@protocol PREExperimentResolverProtocol;

@interface PREResponsesMetricsPET : NSObject <PREResponsesMetricsProtocol> {
    PETEventTracker2 *_tracker;
    id<PREExperimentResolverProtocol> _resolver;
    BOOL _isApricotDevice;
    NSString *_processName;
}

- (id)init;
- (void).cxx_destruct;
- (id)tracker;
- (BOOL)isApricotDevice;
- (id)initWithTracker:(id)a0 experimentResolver:(id)a1;
- (id)_responseListFromGeneratedEvent:(id)a0;
- (void)registerResponsesGenerated:(id)a0;
- (void)registerResponseTapped:(id)a0;
- (void)registerResponseViewed:(id)a0;
- (id)initWithExperimentResolver:(id)a0;

@end
