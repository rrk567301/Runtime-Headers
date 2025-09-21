@class NSDate, NSString, IAMMessageEntryManager, IAMModalTarget, IAMStorageCoordinator, NSMutableDictionary, NSDictionary, IAMImpressionManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, IAMMessageMetricsDelegate, IAMApplicationContextProvider;

@interface IAMMessageCoordinator : NSObject <IAMImpressionManagerDelegate, IAMStorageCoordinatorDelegate, IAMEventReceiver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_messageTargetsByTargetIdentifier;
    NSMutableDictionary *_messageTargetsRequiringNilPriorityMessageNotificationAfterRegistrationByTargetIdentifier;
    NSMutableDictionary *_priorityMessageEntryByTargetIdentifier;
    IAMImpressionManager *_impressionManager;
    NSMutableArray *_pendingTriggerContexts;
    IAMStorageCoordinator *_storageCoordinator;
    NSDictionary *_metadataEntryByMessageIdentifier;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupNormal;
    NSDate *_lastDisplayTimeGlobalPresentationPolicyGroupRestricted;
    IAMMessageEntryManager *_messageEntryManager;
    char _isReadyToEvaluateMessages;
    NSString *_modalTargetIdentifier;
    IAMModalTarget *_modalTarget;
    NSDictionary *_messageGroupsByGroupIdentifier;
    NSMutableDictionary *_completionHandlersForObservedEvents;
}

@property (weak, nonatomic) id<IAMMessageMetricsDelegate> metricsDelegate;
@property (weak, nonatomic) id<IAMApplicationContextProvider> applicationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_createMessageFromMessageEntry:(id)a0 replacingResourcePathsWithCachedResourceLocations:(char)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (id)_filterActiveTargetIdentifiers:(id)a0;
- (void)_calculateMessagesProximityAndDownloadResourcesIfNeeded:(id)a0;
- (id)_dequeuePendingTriggerContexts;
- (void)_enqueuePendingTriggerContext:(id)a0;
- (void)_evaluateMessagesForAllActiveTargets;
- (void)_fetchMessagesAndMetadataFromStorageCoordinator:(id /* block */)a0;
- (void)_handleMessageReachedMaximumDisplayCount:(id)a0;
- (void)_handleUpdatedMessageEntries:(id)a0 andMetadata:(id)a1;
- (void)_incrementNumberOfDisplaysForMessageEntry:(id)a0;
- (id)_messageBundleIdentifiers;
- (id)_metadataEntryForMessageIdentifier:(id)a0;
- (void)_notifyMessageTargets:(id)a0 withTargetIdentifier:(id)a1 didUpdatePriorityMessageFromEntry:(id)a2 observedEventName:(id)a3;
- (void)_processObservedEventCallbacksforEventName:(id)a0 willTriggerPresentation:(char)a1 messageIdentifier:(id)a2;
- (void)_reevaluateMessageEntries:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(char)a2 withObservedEventName:(id)a3;
- (void)_reevaluateTargetsWithIdentifiers:(id)a0 forTriggerContext:(id)a1 shouldNotifyTargetsIfPriorityMessageNonNil:(char)a2;
- (void)_removeUserNotificationRemovalForMessageWithIdentifier:(id)a0;
- (void)_reportHoldoutMessageWouldAppear:(id)a0;
- (void)_reportMessageAction:(id)a0 wasPerformedInMessageEntry:(id)a1 fromTargetWithIdentifier:(id)a2;
- (void)_setMessageGroups:(id)a0;
- (void)_startStorageCoordinatorWithMessageEntryProvider:(id)a0 messageMetadataStorage:(id)a1 propertyStorage:(id)a2;
- (void)_updateLastDisplayTime:(id)a0 forMessageEntry:(id)a1;
- (void)_updateMetadata:(id)a0 forMessageEntry:(id)a1 completion:(id /* block */)a2;
- (void)_updateMetadataOfMessageEntriesByTrigger:(id)a0 forReceivedEvent:(id)a1;
- (void)_updatePriorityMessageEntry:(id)a0 forTargetIdentifier:(id)a1 shouldNotifyTargetsIfNonNil:(char)a2 observedEventName:(id)a3;
- (id)beginObservingTriggerEvent:(id)a0 withHandler:(id /* block */)a1;
- (void)endObservingTriggerEvent:(id)a0 forToken:(id)a1;
- (void)impressionManager:(id)a0 impressionDidEndForMessageEntry:(id)a1;
- (void)impressionManager:(id)a0 shouldReportImpressionEventWithDictionary:(id)a1;
- (void)receiveEvent:(id)a0;
- (void)receiveTriggerEventContext:(id)a0;
- (void)registerMessageTarget:(id)a0;
- (void)reportApplicationContextPropertiesDidChange:(id)a0;
- (void)reportChangedContextPropertiesContext:(id)a0;
- (void)reportMessageDidAppearWithIdentifier:(id)a0;
- (void)reportMessageDidAppearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0;
- (void)reportMessageDidDisappearWithIdentifier:(id)a0 fromTargetWithIdentifier:(id)a1;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1;
- (void)reportMessageWithIdentifier:(id)a0 actionWasPerformedWithIdentifier:(id)a1 fromTargetWithIdentifier:(id)a2;
- (void)reportMetricsEvent:(id)a0;
- (void)startWithApplicationContext:(id)a0;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1;
- (void)startWithApplicationContext:(id)a0 messageGroups:(id)a1 messageEntryProvider:(id)a2 messageMetadataStorage:(id)a3 propertyStorage:(id)a4;
- (void)storageCoordinatorMessageEntriesChanged:(id)a0;
- (void)triggerPresentationForMessageWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)unregisterMessageTarget:(id)a0;

@end
