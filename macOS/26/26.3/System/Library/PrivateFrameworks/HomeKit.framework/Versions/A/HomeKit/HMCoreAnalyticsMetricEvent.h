@class NSString, NSError;

@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (readonly, copy) NSString *name;
@property (retain) NSError *error;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)eventPayload;

@end
