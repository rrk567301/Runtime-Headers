@interface ICLinkLinkAVCFPlaybackCoordinatorMedium : ICLiveLinkPlaybackCoordinatorMedium

@property (readonly, nonatomic) struct OpaqueAVCFPlaybackCoordinator { } *playbackCoordinator;

- (void)handleNewTransportControlStateDictionary:(id)a0;
- (void)dealloc;
- (void)handleNewParticipantStateDictionary:(id)a0;
- (void)removeParticipant:(id)a0;
- (void)clearCoordinationMediumDelegate;
- (id)initWithPlaybackCoordinator:(struct OpaqueAVCFPlaybackCoordinator { } *)a0 liveLink:(id)a1;

@end
