@class CPLSyncSessionThroughputMetrics, NSMutableDictionary, NSString;
@protocol CPLSyncThroughputReporterDelegate;

@interface CPLSyncThroughputReporter : NSObject {
    NSMutableDictionary *_kindOfWorkReporters;
    NSString *_parentMetricsIdentifier;
}

@property (weak, nonatomic) id<CPLSyncThroughputReporterDelegate> delegate;
@property (retain, nonatomic) CPLSyncSessionThroughputMetrics *metrics;

- (void).cxx_destruct;
- (void)endTrackingWork;
- (id)initWithCategory:(id)a0 parentMetrics:(id)a1;
- (void)addCompletedWorkBytesCount:(unsigned long long)a0 kindOfWork:(id)a1;
- (void)addCompletedWorkItemCount:(unsigned long long)a0;
- (void)addCompletedWorkItemCount:(unsigned long long)a0 kindOfWork:(id)a1;
- (void)beginKindOfWork:(id)a0;
- (void)endKindOfWork:(id)a0;
- (id)initWithCategory:(id)a0 parentReport:(id)a1;
- (id)makeChildReportForCategory:(id)a0;
- (id)makeSiblingReportForCategory:(id)a0;
- (void)startTrackingWork;

@end
