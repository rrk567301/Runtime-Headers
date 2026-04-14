@class FCCloudContext, FCUserVector, FCAsyncSerialQueue, NSDate, NSString;

@interface FCUserVectorManager : NSObject <FCAppActivityObserving>

@property (retain, nonatomic) FCAsyncSerialQueue *queue;
@property (retain, nonatomic) FCUserVector *userVector;
@property (retain, nonatomic) FCCloudContext *context;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_applicationDidEnterBackground;
- (void)_applicationDidEnterForeground;
- (void)_cacheGSToken;
- (void)_fetchUserVector:(id /* block */)a0;
- (void)_submitPersonalizationVector;
- (void)activityObservingApplicationWillTerminate;
- (void)activityObservingApplicationWindowDidBecomeBackground;
- (void)activityObservingApplicationWindowDidBecomeForeground;

@end
