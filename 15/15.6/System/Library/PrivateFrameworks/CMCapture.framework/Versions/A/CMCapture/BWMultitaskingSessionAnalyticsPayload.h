@class NSString;

@interface BWMultitaskingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) char windowed;
@property (nonatomic) char pipEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
