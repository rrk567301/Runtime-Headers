@class NSString;

@interface BWISPStartupAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) int ispStartupTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)eventName;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
