@class NSMutableDictionary, NSUUID, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AVPlaybackCoordinationMediumDelegate, AVPlayerPlaybackCoordinatorDelegate;

@interface AVPlayerPlaybackCoordinatorStorage : NSObject {
    NSObject<OS_dispatch_queue> *rwQueue;
    NSMutableDictionary *controlStates;
    NSMutableDictionary *participantStates;
    NSMutableDictionary *participantLimitPerSuspensionReason;
    NSMutableArray *suspensionReasonsThatTriggerWaiting;
    char pauseSnapsToMediaTimeOfOriginator;
    NSMutableArray *waitingPoliciesArray;
    NSUUID *localParticipantUUID;
    id<AVPlayerPlaybackCoordinatorDelegate> delegate;
    id<AVPlaybackCoordinationMediumDelegate> coordinationMediumDelegate;
    NSString *mediumLoggingIdentifier;
    NSMutableDictionary *currentLamportTimestampForIdentifier;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
