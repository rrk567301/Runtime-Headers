@class NSDictionary, PGManagerWorkingContext;

@interface PGGraphSyndicatedAssetsMetricEvent : PGAbstractMetricEvent {
    NSDictionary *_payload;
}

@property (retain, nonatomic) PGManagerWorkingContext *workingContext;

- (id)payload;
- (void).cxx_destruct;
- (id)identifier;
- (void)gatherMetricsWithProgressBlock:(id /* block */)a0;
- (id)initWithWorkingContext:(id)a0;
- (BOOL)shouldReportMetrics;

@end
