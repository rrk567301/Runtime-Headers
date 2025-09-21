@class NSString, NSDictionary;

@interface SFAnnounceNotificationsEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) char tappedInitialEnable;
@property (nonatomic) char tappedCustomize;
@property (nonatomic) char tappedNotNow;
@property (nonatomic) char tappedDismissButton;
@property (nonatomic) char customizedApps;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)submitEvent;

@end
