@class NSString, NSMutableArray, NSArray;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer> {
    NSArray *_allowedBundleIds;
}

@property (class, readonly, copy, nonatomic) NSString *identifier;
@property (class, readonly, nonatomic) unsigned int preferredQoSClass;

@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription;
@property (readonly, nonatomic) NSMutableArray *radioPlayActivityEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_itemIsPlayingFromQueueSectionIdentifier:(id)a0 itemIdentifier:(id)a1 cursor:(id)a2;
- (void)_clampTimeValuesForPAFEvent:(id)a0 withDuration:(double)a1;
- (id)_fetchField:(id)a0 fromTransitionEvent:(id)a1 inParametersDictionary:(id)a2;
- (BOOL)_finalizePAFEvents:(id)a0;
- (id)_findRecentPlaybackStartFromTypes:(id)a0 matchingPayload:(id)a1 cursor:(id)a2;
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)a0;
- (id)_generatePlaybackEndEventFromEvent:(id)a0 withQueueSectionIdentifier:(id)a1 itemIdentifier:(id)a2 cursor:(id)a3;
- (double)_getPlaybackDurationForHLSStreamFromStartEvent:(id)a0 toEndEvent:(id)a1 withLimitedCursor:(id)a2;
- (double)_getStartTimeForMostRecentPlaybackStart:(id)a0 withItemBeginEvent:(id)a1 containerBeginEvent:(id)a2 cursor:(id)a3;
- (BOOL)_handleApplicationTerminationEvent:(id)a0 cursor:(id)a1;
- (BOOL)_handleItemEndEvent:(id)a0 cursor:(id)a1;
- (BOOL)_handleItemPauseEvent:(id)a0 cursor:(id)a1;
- (BOOL)_handleItemPositionJumpEvent:(id)a0 cursor:(id)a1;
- (BOOL)_handleItemResumeEvent:(id)a0 cursor:(id)a1;
- (void)_handleURLBagProviderDidUpdateBagNotification:(id)a0;
- (double)_incomingDurationBeforePivotForTransition:(id)a0 useSourceTime:(BOOL)a1;
- (double)_incomingPivotTimeForTransitionEvent:(id)a0 useSourceTime:(BOOL)a1;
- (double)_incomingStartTimeForTransitionEvent:(id)a0 useSourceTime:(BOOL)a1;
- (BOOL)_itemBeginOccuredDuringOverlappingTransition:(id)a0 cursor:(id)a1;
- (BOOL)_itemEndOccuredDuringOverlappingTransition:(id)a0 cursor:(id)a1;
- (BOOL)_itemIsPlaceholderFromQueueSectionIdentifier:(id)a0 itemIdentifier:(id)a1 cursor:(id)a2;
- (BOOL)_itemWithinHLSTimedMetadataBeginFromQueueSection:(id)a0 itemIdentifier:(id)a1 cursor:(id)a2;
- (double)_outgoingDurationAfterPivotForTransition:(id)a0 useSourceTime:(BOOL)a1;
- (double)_outgoingEndTimeForTransitionEvent:(id)a0 useSourceTime:(BOOL)a1;
- (double)_outgoingPivotTimeForTransitionEvent:(id)a0 useSourceTime:(BOOL)a1;
- (BOOL)_queueSectionIsAODFromSectionIdentifier:(id)a0 cursor:(id)a1;
- (void)_sendPlayEndNotificationWithStartTime:(double)a0 endTime:(double)a1 pafEvent:(id)a2 cursor:(id)a3;
- (void)_updateAllowedBundleIdsIfNecessary:(id)a0;
- (void)_updatePAFEvent:(id)a0 withAccountIdentifier:(id)a1 cursor:(id)a2;
- (void)_updatePAFEvent:(id)a0 withAudioChangeEvent:(id)a1;
- (void)_updatePAFEvent:(id)a0 withDeviceInfoFromCursor:(id)a1;
- (void)_updatePAFEvent:(id)a0 withEnqueuerAccountIdentifier:(id)a1 queueAddEvent:(id)a2 cursor:(id)a3;
- (void)_updatePAFEvent:(id)a0 withItemBeginEvent:(id)a1 containerBeginPayload:(id)a2 cursor:(id)a3 forEventType:(id)a4;
- (void)_updatePAFEvent:(id)a0 withQueueAddEvent:(id)a1 queueSectionIdentifier:(id)a2 cursor:(id)a3;
- (void)_updatePAFEvent:(id)a0 withSharedListeningInfoFromCursor:(id)a1;
- (void)_updatePAFEvent:(id)a0 withVocalAttenuationInfoForEndEvent:(id)a1 cursor:(id)a2;
- (BOOL)_vocalControlIsOnForEvent:(id)a0;
- (double)_wallClockPlayDurationForEndEvent:(id)a0 endReasonType:(long long)a1 itemBeginEvent:(id)a2 cursor:(id)a3;
- (void)subscribeToEventStream:(id)a0;
- (void)unsubscribeFromEventStream:(id)a0;

@end
