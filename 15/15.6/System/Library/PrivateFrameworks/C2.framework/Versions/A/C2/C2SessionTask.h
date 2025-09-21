@class NSURLSessionTaskMetrics, NSString, NSMutableSet, NSURLSessionDataTask, NSObject, C2RequestOptions;
@protocol C2RequestDelegate, OS_os_activity, C2SessionTaskDelegate;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate>

@property (retain, nonatomic) NSURLSessionDataTask *task;
@property (retain, nonatomic) NSURLSessionTaskMetrics *taskMetrics;
@property (nonatomic) char isComplete;
@property (retain, nonatomic) id<C2SessionTaskDelegate> sessionTaskDelegate;
@property (nonatomic) double initTime;
@property (nonatomic) double resetTime;
@property (nonatomic) unsigned int attemptCount;
@property (retain, nonatomic) NSMutableSet *outstandingCallbacks;
@property (readonly, nonatomic) NSObject<OS_os_activity> *activity;
@property (readonly, copy, nonatomic) C2RequestOptions *options;
@property (readonly, nonatomic) id<C2RequestDelegate> delegate;
@property (readonly, nonatomic) char callbackHung;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)callbackHealthQueue;
+ (double)captureMetricDurationBetweenStart:(double)a0 andEnd:(double)a1;
+ (double)captureMetricsForTimingData:(id)a0 withKey:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)taskIdentifier;
- (id)taskDescription;
- (void)C2Session:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (void)handleCallbackForTask:(id)a0 callback:(id /* block */)a1;
- (void)captureMetricsWithError:(id)a0 eventType:(long long)a1;
- (void)didFinishCollectingMetrics:(id)a0;
- (id)initWithOptions:(id)a0 delegate:(id)a1 sessionTaskDelegate:(id)a2;
- (void)testBehavior_triggerCallbackHang;

@end
