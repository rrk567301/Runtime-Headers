@class NSString, ADNotificationBus;

@interface ADNotificationManualNotificationEventSource : NSObject <ADNotificationBusDelegate>

@property (retain, nonatomic) ADNotificationBus *eventBus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)busWillWakeUp:(id)a0;
- (void)busWillSleep:(id)a0;
- (void)newConsumer:(id)a0 onBus:(id)a1;
- (void)sendEventWithPayload:(id)a0;

@end
