@class NSString, NSDictionary;

@interface BWTOFAssistedAutoFocusEstimatorAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (retain, nonatomic) NSString *portType;
@property (copy, nonatomic) NSString *clientApplicationID;
@property (retain, nonatomic) NSDictionary *estimatorResults;
@property (nonatomic) unsigned int streamingTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)eventName;
- (id)eventDictionary;

@end
