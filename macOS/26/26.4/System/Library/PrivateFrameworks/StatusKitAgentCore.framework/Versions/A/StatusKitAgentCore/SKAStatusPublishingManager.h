@class NSString, NSObject;
@protocol SKACloudDatabaseManaging, SKALocalDatabaseManaging, SKAInvitationManaging, OS_dispatch_queue, SKAStatusEncryptionManaging, SKAAccountProviding, SKAChannelManaging, SKAServerBagProviding;

@interface SKAStatusPublishingManager : NSObject <SKAStatusPublishingManaging>

@property (retain, nonatomic) id<SKACloudDatabaseManaging> cloudDatabaseManager;
@property (retain, nonatomic) id<SKALocalDatabaseManaging> localDatabaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property BOOL pendingRequestScheduled;
@property BOOL clientIsRateLimited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_errorForStatusPublishRequestWithIdentifier:(id)a0 requestedStatusCreationDate:(id)a1 isOlderThanExistingStatus:(id)a2 existingStatusCreationDate:(id)a3;
+ (id)logger;
+ (id)_errorForDuplicateStatusPublishRequestWithIdentifier:(id)a0;

- (void)_markPublishAttempt;
- (void)ensurePendingPublishRequestExistsWithPublishRequest:(id)a0 forStatusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)removePendingPublishRequestsForStatusTypeIdentifier:(id)a0 olderThanRequest:(id)a1;
- (void)publishPendingRequestsWithDelay:(double)a0;
- (void)findOrCreatePersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)_shouldAbandonRequestForError:(id)a0;
- (void)publishPendingRequestForReason:(long long)a0;
- (void)provisionPayloads:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)pendingPublishRequestsForStatusTypeIdentifier:(id)a0;
- (id)_pendingPublishRequestsForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1;
- (BOOL)_shouldRetryWithDelayForError:(id)a0;
- (BOOL)_shouldAllowPublishForPublishRequest:(id)a0 onChannel:(id)a1 error:(id *)a2;
- (id)initWithCloudDatabaseManager:(id)a0 localDatabaseManager:(id)a1 channelManager:(id)a2 accountProvider:(id)a3 encryptionManager:(id)a4 invitationManager:(id)a5 serverBag:(id)a6;
- (void).cxx_destruct;
- (BOOL)_shouldClientRateLimit;
- (void)createPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)_removePendingPublishRequestsForStatusTypeIdentifier:(id)a0 olderThanRequest:(id)a1 databaseContext:(id)a2;
- (void)_publishStatusRequest:(id)a0 statusTypeIdentifier:(id)a1 afterTime:(double)a2 isPendingPublish:(BOOL)a3 retryCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (void)_removePendingPublishRequestWithUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (void)publishStatusRequest:(id)a0 statusTypeIdentifier:(id)a1 afterTime:(double)a2 isPendingPublish:(BOOL)a3 completion:(id /* block */)a4;
- (BOOL)_shouldRollChannelForError:(id)a0;

@end
