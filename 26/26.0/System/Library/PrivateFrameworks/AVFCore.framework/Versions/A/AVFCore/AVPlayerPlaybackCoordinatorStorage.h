@class NSMutableDictionary, NSUUID, NSString, AVPlaybackCoordinationMedium, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVPlaybackCoordinationMediumDelegate, AVPlayerPlaybackCoordinatorDelegate;

@interface AVPlayerPlaybackCoordinatorStorage : NSObject {
    NSObject<OS_dispatch_queue> *rwQueue;
    NSMutableDictionary *controlStates;
    NSMutableDictionary *participantStates;
    NSMutableDictionary *participantLimitPerSuspensionReason;
    NSMutableArray *suspensionReasonsThatTriggerWaiting;
    BOOL pauseSnapsToMediaTimeOfOriginator;
    NSMutableArray *waitingPoliciesArray;
    NSUUID *localParticipantUUID;
    id<AVPlayerPlaybackCoordinatorDelegate> delegate;
    id<AVPlaybackCoordinationMediumDelegate> coordinationMediumDelegate;
    NSString *mediumLoggingIdentifier;
    AVPlaybackCoordinationMedium *playbackCoordinationMedium;
    NSMutableDictionary *currentLamportTimestampForIdentifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
