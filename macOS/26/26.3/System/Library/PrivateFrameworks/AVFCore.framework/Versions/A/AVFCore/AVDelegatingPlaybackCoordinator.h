@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVPlaybackCoordinatorPlaybackControlDelegate, AVPlaybackCoordinationMediumDelegate;

@interface AVDelegatingPlaybackCoordinator : AVPlaybackCoordinator {
    struct OpaqueFigTimelineCoordinator { } *_figTimelineCoordinator;
    NSObject<OS_dispatch_queue> *_timelineControlQueue;
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    NSObject<OS_dispatch_queue> *_figTimelineCoordinatorConfigQueue;
    NSObject<OS_dispatch_queue> *_currentItemIDConfigQueue;
    id<AVPlaybackCoordinatorPlaybackControlDelegate> _delegate;
    id _suspensionsChangedNotificationToken;
    id _participantsChangedNotificationToken;
    id _didIssueCommandToPlaybackObjectNotificationToken;
    NSMutableArray *_suspensionReasons;
    NSMutableArray *_otherParticipants;
    NSMutableDictionary *_controlStates;
    NSMutableDictionary *_participantStates;
    NSMutableDictionary *_participantLimitPerSuspensionReason;
    NSMutableArray *_suspensionReasonsThatTriggerWaiting;
    NSMutableArray *_waitingPoliciesArray;
    BOOL _pauseSnapsToMediaTimeOfOriginator;
    NSString *_currentItemIdentifier;
    id<AVPlaybackCoordinationMediumDelegate> _coordinationMediumDelegate;
    NSString *_mediumLoggingIdentifier;
}

@property (readonly, weak, nonatomic) id<AVPlaybackCoordinatorPlaybackControlDelegate> playbackControlDelegate;
@property (readonly, nonatomic) NSString *currentItemIdentifier;

- (void)setParticipantLimit:(long long)a0 forWaitingOutSuspensionsWithReason:(id)a1;
- (id)_currentWaitingPoliciesArray;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0 proposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)a0;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)coordinationMediumDelegate;
- (id)otherParticipants;
- (void)_updateWaitingPoliciesArray:(id)a0 withPolicies:(id)a1;
- (void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })expectedItemTimeAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setMediumLoggingIdentifier:(id)a0;
- (void)_removeUnusedTransportControlStates;
- (void)_updateParticipantStateDictionaryWithParticipantState:(id)a0;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (void)setCoordinationMediumDelegate:(id)a0;
- (id)mediumLoggingIdentifier;
- (id)participantForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)handleNewTransportControlStateDictionary:(id)a0;
- (void)handleRemovalOfParticipant:(id)a0;
- (id)suspensionReasons;
- (void)_setIsInExpanseMediaPlaybackOnAVAudioSession;
- (id)trackedTransportControlStateDictionaries;
- (id)beginSuspensionForReason:(id)a0;
- (void)dealloc;
- (id)avfParticipantsForFigParticipantsUUIDs:(id)a0;
- (void)_updateOtherParticipantsUsingFigParticipantUUIDs:(id)a0;
- (void)_updateTransportControlStateDictionaryWithTransportControlState:(id)a0;
- (void)handleNewParticipantStateDictionary:(id)a0;
- (void)handleReplacementParticipantStateDictionaries:(id)a0;
- (id)suspensionReasonsThatTriggerWaiting;
- (void)_updateSuspensionReasons:(id)a0;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)a0;
- (id)_participantStateForIdentifier:(id)a0;
- (id)_figTimelineCoordinatorConfigQueue;
- (void)_prepareToInitiatePlayback;
- (void)_removeParticipantStateWithIdentifier:(id)a0;
- (void)_replaceParticipantStates:(id)a0;
- (void)_setWaitingPolicies:(id)a0;
- (id)_transportControlStateForItemIdentifier:(id)a0;
- (void)applyFigPauseSnapsToMediaTimeOfOriginator;
- (void)coordinateRateChangeToRate:(float)a0 options:(unsigned long long)a1;
- (void)coordinateSeekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 options:(unsigned long long)a1;
- (id)initWithPlaybackControlDelegate:(id)a0;
- (id)participantStates;
- (void)reapplyCurrentItemStateToPlaybackControlDelegate;
- (void)transitionToItemWithIdentifier:(id)a0 proposingInitialTimingBasedOnTimebase:(struct OpaqueCMTimebase { } *)a1;

@end
