@class NSString, ADNotificationBus, ADNotificationDarwinNotificationToken;
@protocol ADNotificationRegistrationToken;

@interface ADNotificationDarwinNotificationEventSource : NSObject <ADNotificationBusDelegate>

@property (retain, nonatomic) NSString *notificationName;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) ADNotificationDarwinNotificationToken *muxToken;
@property (retain, nonatomic) id<ADNotificationRegistrationToken> delegateToken;
@property (retain, nonatomic) ADNotificationBus *eventBus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithNotificationName:(id)a0;
- (void)busWillWakeUp:(id)a0;
- (void)busWillSleep:(id)a0;
- (void)registerWithBusStation:(id)a0 forTopic:(id)a1;
- (void)notificationFired;

@end
