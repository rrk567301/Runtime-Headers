@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_group, AFAnalyticsService;

@interface AFAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    id<AFAnalyticsService> _service;
}

+ (id)sharedAnalytics;

- (void)logInstrumentation:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnContext:(id)a2;
- (void)setService:(id)a0;
- (void)logInstrumentation:(id)a0 turnContext:(id)a1;
- (void)logEvents:(id)a0;
- (id)initWithInstanceContext:(id)a0;
- (void)boostQueuedEvents:(id /* block */)a0;
- (void)beginEventsGrouping;
- (void)logEventWithType:(long long)a0 context:(id)a1 contextNoCopy:(BOOL)a2;
- (id)newTurnBasedInstrumentationContext;
- (id)_service:(BOOL)a0;
- (void)barrier:(id /* block */)a0;
- (void)logClientFeedbackPresented:(id)a0 dialogIdentifierProvider:(id)a1;
- (void)logClientFeedbackPresented:(id)a0;
- (void)_stageEvents:(id)a0;
- (void)logInstrumentationOfType:(Class)a0 turnIdentifier:(id)a1;
- (id)init;
- (void)_stageEvent:(id)a0;
- (void)logEventWithType:(long long)a0 contextProvider:(id /* block */)a1;
- (void)logInstrumentation:(id)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 contextProvider:(id /* block */)a2 contextProvidingQueue:(id)a3;
- (void)logEventWithType:(long long)a0 contextProvider:(id /* block */)a1 contextProvidingQueue:(id)a2;
- (void)logInstrumentationOfType:(Class)a0 machAbsoluteTime:(unsigned long long)a1 turnIdentifier:(id)a2;
- (void)endEventsGrouping;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 contextResolver:(id /* block */)a2;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 context:(id)a2;
- (void)logEvent:(id)a0;
- (void)logEventWithType:(long long)a0 context:(id)a1;
- (void)logEventWithType:(long long)a0 contextResolver:(id /* block */)a1;
- (void).cxx_destruct;
- (void)logEventWithType:(long long)a0 machAbsoluteTime:(unsigned long long)a1 context:(id)a2 contextNoCopy:(BOOL)a3;

@end
