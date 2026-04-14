@class NSUUID, AVWeakReference;

@interface AVPlaybackCoordinationMediumParticipant : NSObject {
    AVWeakReference *_weakReferenceToPlaybackCoordinator;
}

@property (readonly, nonatomic) NSUUID *participantIdentifier;

- (void)dealloc;
- (id)initWithPlaybackCoordinator:(id)a0 participantIdentifier:(id)a1;
- (id)playbackCoordinator;

@end
