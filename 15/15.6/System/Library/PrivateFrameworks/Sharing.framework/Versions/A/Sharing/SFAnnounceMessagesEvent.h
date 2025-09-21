@class NSString, NSDictionary;

@interface SFAnnounceMessagesEvent : NSObject <SFCoreAnalyticsEvent>

@property (class, readonly, copy, nonatomic) NSString *eventName;

@property (nonatomic) char allowsSiriWhenLocked;
@property (nonatomic) char announceMessagesAlreadyEnabled;
@property (nonatomic) long long pairingExitView;
@property (nonatomic) char skippedTutorialCards;
@property (nonatomic) char userAutomaticallyEnrolled;
@property (nonatomic) char userExplicitlyOptedIn;
@property (nonatomic) char userExplicitlyOptedOut;
@property (readonly, copy, nonatomic) NSDictionary *eventPayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)stringForExitView:(long long)a0;

- (void)submitEvent;

@end
