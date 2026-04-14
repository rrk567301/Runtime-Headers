@class NSString, NSError;

@interface HMCoreAnalyticsMetricEvent : HMFObject

@property (readonly, copy) NSString *name;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)eventPayload;
- (id)initWithName:(id)a0;

@end
