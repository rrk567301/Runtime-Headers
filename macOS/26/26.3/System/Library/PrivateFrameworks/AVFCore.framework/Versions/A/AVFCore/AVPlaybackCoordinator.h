@class NSArray;

@interface AVPlaybackCoordinator : NSObject

@property (readonly, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) NSArray *suspensionReasons;

+ (void)initialize;

- (void)setParticipantLimit:(long long)a0 forWaitingOutSuspensionsWithReason:(id)a1;
- (id)_currentWaitingPoliciesArray;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0 proposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)a0;
- (id)initInternal;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)init;
- (void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })expectedItemTimeAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (id)beginSuspensionForReason:(id)a0;
- (void)_removeSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)suspensionReasonsThatTriggerWaiting;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)a0;

@end
