@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPHistoricalReportManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_reportsDirectory;
    long long _retentionDays;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)cleanupOldReports;
- (id)filenameDateFormatter;
- (void)getReportsForDateInterval:(id)a0 reportHandler:(id /* block */)a1;
- (void)saveReport:(id)a0 withType:(unsigned int)a1 errorHandler:(id /* block */)a2;

@end
