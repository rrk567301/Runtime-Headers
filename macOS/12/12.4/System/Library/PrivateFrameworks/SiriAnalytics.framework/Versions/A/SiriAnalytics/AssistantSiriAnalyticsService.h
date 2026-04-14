@class SiriAnalyticsPreferences, SiriAnalyticsInternalTelemetry, SiriAnalyticsWhiteRose, SiriAnalyticsLargeMessageStorage, SiriAnalyticsSensitiveConditionsObservers, AssistantSiriAnalyticsMessageTailing, SiriAnalyticsTimePeriodBuffer, NSObject, SiriAnalyticsXPCServiceListener, SiriAnalyticsMessageObserverStream, SiriAnalyticsMessageResolutionPipeline, AssistantSiriAnalyticsClockWatcher;
@protocol SiriAnalyticsObservableMessages, SiriAnalyticsMessageStorage, OS_dispatch_queue, SiriAnalyticsServiceHostDelegate;

@interface AssistantSiriAnalyticsService : NSObject <SiriAnalyticsSensitiveConditionsObserverDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    SiriAnalyticsXPCServiceListener *_siriAnalyticsListener;
    SiriAnalyticsTimePeriodBuffer *_storageBuffer;
    id<SiriAnalyticsMessageStorage> _storageProvider;
    id<SiriAnalyticsMessageStorage> _localStorageProvider;
    SiriAnalyticsLargeMessageStorage *_largeMessageStorage;
    SiriAnalyticsMessageObserverStream *_postTransformStream;
    SiriAnalyticsWhiteRose *_whiteRose;
    SiriAnalyticsMessageResolutionPipeline *_messageResolutionPipeline;
    AssistantSiriAnalyticsClockWatcher *_clockWatcher;
    SiriAnalyticsPreferences *_preferences;
    AssistantSiriAnalyticsMessageTailing *_messageTailing;
    SiriAnalyticsInternalTelemetry *_internalTelemetry;
    id<SiriAnalyticsServiceHostDelegate> _delegate;
    SiriAnalyticsSensitiveConditionsObservers *_sensitiveConditionsObservers;
}

@property (readonly) id<SiriAnalyticsObservableMessages> postTransformationStream;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (BOOL)_analyticsEnabled;
- (void)sensitiveCondition:(unsigned long long)a0 startedAt:(unsigned long long)a1;
- (void)sensitiveCondition:(unsigned long long)a0 endedAt:(unsigned long long)a1;
- (id)initWithQueue:(id)a0 storageProvider:(id)a1 localStorageProvider:(id)a2 largeMessageStorage:(id)a3 delegate:(id)a4;
- (void)registerMessageResolver:(id)a0;
- (id)_applyTransformationsToMessages:(id)a0;
- (id)_applyTransformationsToMessage:(id)a0;
- (void)registerSensitiveConditionsObserver:(id)a0;
- (void)listener:(id)a0 messagesReceived:(id)a1;
- (void)listener:(id)a0 unresolvedMessagesReceived:(id)a1;
- (void)listener:(id)a0 largeMessageReceivedWithPath:(id)a1 messageWrapper:(id)a2 completion:(id /* block */)a3;

@end
