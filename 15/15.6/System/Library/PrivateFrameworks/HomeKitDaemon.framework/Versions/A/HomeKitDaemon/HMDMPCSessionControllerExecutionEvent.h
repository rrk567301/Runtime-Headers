@class NSString;

@interface HMDMPCSessionControllerExecutionEvent : HMDMediaPlaybackActionEvent

@property char didPartiallySucceed;
@property (readonly, copy) NSString *resultString;

+ (id)identifier;

- (id)coreAnalyticsEventName;
- (id)coreAnalyticsEventDictionary;

@end
