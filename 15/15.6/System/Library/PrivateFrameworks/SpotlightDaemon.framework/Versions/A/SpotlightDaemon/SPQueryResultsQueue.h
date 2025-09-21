@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface SPQueryResultsQueue : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) struct __SIResultQueue { } *siResultsQueue;
@property (retain, nonatomic) NSMutableDictionary *jobs;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) long long pausedCount;
@property (nonatomic) char canceled;
@property (nonatomic) char tracked;
@property (nonatomic) char live;
@property (nonatomic) char shared;
@property (readonly) char hasPausedResults;
@property (nonatomic) char disableResultStreaming;

+ (id)findResultsQueueWithIdentifier:(id)a0;
+ (id)sharedInstanceDispatchQueue:(id)a0;
+ (id)sharedInstanceMaintenanceDispatchQueue:(id)a0;
+ (void)startTrackingResultsQueue:(id)a0;
+ (void)stopTrackingResultsQueueWithIdentifier:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (void)cancelJob:(id)a0;
- (void)_stopTracking;
- (void)addJob:(id)a0;
- (void)_processResults;
- (void)_scheduleWakeupForced:(char)a0;
- (void)_startTracking;
- (id)initWithIdentifier:(id)a0 dispatchQueue:(id)a1;
- (void)pauseResults;
- (void)resumeResults;
- (void)resumeResultsIfSystemInGoodState;

@end
