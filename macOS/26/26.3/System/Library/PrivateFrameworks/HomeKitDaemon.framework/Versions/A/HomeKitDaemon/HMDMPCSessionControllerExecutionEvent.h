@class NSString;

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent

@property BOOL didPartiallySucceed;
@property (readonly, copy) NSString *resultString;

+ (id)identifier;

- (id)coreAnalyticsEventDictionary;
- (id)coreAnalyticsEventName;

@end
