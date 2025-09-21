@class NSSet;

@interface HDCloudSyncPipelineStageRemoveSharingParticipants : HDCloudSyncPipelineStage

@property (nonatomic) char removeAllParticipants;
@property (copy, nonatomic) NSSet *participantsToRemove;

- (void).cxx_destruct;
- (void)main;

@end
