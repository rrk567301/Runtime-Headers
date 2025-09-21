@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SKGTaskThroughputManager : NSObject

@property (retain) NSMutableDictionary *taskMetricRepository;
@property (retain) NSObject<OS_dispatch_queue> *throughputQueue;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)getThroughputMetricForTask:(int)a0 metricIdentifier:(id)a1;
- (void)registerBeginForTask:(id)a0 taskType:(int)a1;
- (void)registerEndForTask:(id)a0 taskType:(int)a1;

@end
