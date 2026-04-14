@class NSObject, SiriAnalyticsPreferences;
@protocol OS_dispatch_queue;

@interface AssistantSiriAnalyticsMessageTailing : NSObject <SiriAnalyticsMessageObserverDelegate> {
    SiriAnalyticsPreferences *_preferences;
    NSObject<OS_dispatch_queue> *_messageTailingQueue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPreferences:(id)a0 observable:(id)a1;
- (void)_tailMessages:(id)a0;
- (void)analyticsMessageObserver:(id)a0 producedMessages:(id)a1;

@end
