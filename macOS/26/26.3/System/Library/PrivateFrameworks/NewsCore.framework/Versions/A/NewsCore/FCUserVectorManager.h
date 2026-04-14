@class FCCloudContext, FCAsyncSerialQueue, FCUserVector, NSDate, NSString;
@protocol FCUserVectorAggregateVectorProvider;

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>

@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) id<FCUserVectorAggregateVectorProvider> aggregateVectorProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)_cacheGSToken;
- (void)_fetchUserVector:(id /* block */)a0;
- (void)_applicationDidEnterBackground;
- (void)_submitPersonalizationVector;
- (void).cxx_destruct;
- (void)_applicationDidEnterForeground;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeForeground;

@end
