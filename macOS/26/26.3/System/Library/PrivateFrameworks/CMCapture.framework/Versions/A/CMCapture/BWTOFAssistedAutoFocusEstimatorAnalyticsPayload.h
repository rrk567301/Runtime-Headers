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

- (id)init;
- (id)eventDictionary;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
