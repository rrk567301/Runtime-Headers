@class SWCollaborationCoordinator;

@interface _SWCollaborationCoordinator : SWCollaborationCoordinator

@property (class, readonly, nonatomic) SWCollaborationCoordinator *sharedManager;

- (void)_sendUpdateCollaborationParticipantsAction:(id)a0;
- (void)_sendStartCollaborationAction:(id)a0;

@end
