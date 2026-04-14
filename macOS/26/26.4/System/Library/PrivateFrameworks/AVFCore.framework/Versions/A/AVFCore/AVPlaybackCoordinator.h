@class NSArray;

@interface AVPlaybackCoordinator : NSObject

@property (readonly, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) NSArray *suspensionReasons;

+ (void)initialize;

- (id)beginSuspensionForReason:(id)a0;
- (BOOL)pauseSnapsToMediaTimeOfOriginator;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })expectedItemTimeAtHostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initInternal;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)suspensionReasonsThatTriggerWaiting;
- (id)_currentWaitingPoliciesArray;
- (void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)a0;
- (void)setSuspensionReasonsThatTriggerWaiting:(id)a0;
- (void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0 proposingNewTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)setParticipantLimit:(long long)a0 forWaitingOutSuspensionsWithReason:(id)a1;
- (void)_removeSuspension:(struct OpaqueFigTimelineCoordinatorSuspension { } *)a0;
- (id)init;
- (long long)participantLimitForWaitingOutSuspensionsWithReason:(id)a0;

@end
