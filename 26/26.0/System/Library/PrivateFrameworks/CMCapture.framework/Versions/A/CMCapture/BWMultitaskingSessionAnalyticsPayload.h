@class NSString;

@interface BWMultitaskingSessionAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (copy, nonatomic) NSString *clientApplicationID;
@property (nonatomic) BOOL windowed;
@property (nonatomic) BOOL pipEnabled;
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
