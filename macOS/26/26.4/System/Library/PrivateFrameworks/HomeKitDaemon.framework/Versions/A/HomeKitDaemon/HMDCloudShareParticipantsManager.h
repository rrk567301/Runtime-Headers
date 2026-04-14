@class HMDHome, NSString, NSObject;
@protocol HMDCloudShareParticipantManaging, HMDCloudShareParticipantsManagerDataSource, HMDCloudShareParticipantsManagerDelegate, OS_dispatch_queue;

@interface HMDCloudShareParticipantsManager : HMFObject <HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) id<HMDCloudShareParticipantManaging> cloudShareManager;
@property (weak) HMDHome *home;
@property (weak) id<HMDCloudShareParticipantsManagerDataSource> dataSource;
@property (weak) id<HMDCloudShareParticipantsManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (void).cxx_destruct;
- (id)logIdentifier;
- (void)clearParticipants;
- (id)_fetchUntrustedInvitationContextForUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (void)_clearParticipants:(id)a0;
- (id)_fetchInvitationContextForUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (id)_fetchInvitationToUser:(id)a0 shouldGrantWriteAccess:(BOOL)a1;
- (void)_inviteUser:(id)a0 usingDevice:(id)a1 participants:(id)a2;
- (void)_updateShareParticipants:(id)a0;
- (void)fetchParticipantsWithCompletion:(id /* block */)a0;
- (void)handleHomeDataLoadedNotification:(id)a0;
- (void)handleHomeUserAddedNotification:(id)a0;
- (void)handleHomeUserRemovedNotification:(id)a0;
- (id)initWithQueue:(id)a0 cloudShareManager:(id)a1 home:(id)a2;
- (void)inviteUser:(id)a0 usingDevice:(id)a1;
- (void)updateShareParticipants;

@end
