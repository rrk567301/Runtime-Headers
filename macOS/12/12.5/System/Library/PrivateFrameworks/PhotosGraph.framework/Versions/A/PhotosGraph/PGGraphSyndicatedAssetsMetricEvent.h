@class NSDictionary, PGManagerWorkingContext;

@interface PGGraphSyndicatedAssetsMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}

@property (retain, nonatomic) PGManagerWorkingContext *workingContext;

- (void).cxx_destruct;
- (id)identifier;
- (id)payload;
- (id)initWithWorkingContext:(id)a0;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;

@end
