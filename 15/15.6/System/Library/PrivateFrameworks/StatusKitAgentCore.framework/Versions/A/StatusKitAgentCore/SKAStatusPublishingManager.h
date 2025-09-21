@class NSString, NSObject;
@protocol SKAStatusEncryptionManaging, SKADatabaseManaging, SKAAccountProviding, SKAInvitationManaging, OS_dispatch_queue, SKAChannelManaging;

@interface SKAStatusPublishingManager : NSObject <SKAStatusPublishingManaging>

@property (retain, nonatomic) id<SKADatabaseManaging> databaseManager;
@property (retain, nonatomic) id<SKAChannelManaging> channelManager;
@property (retain, nonatomic) id<SKAStatusEncryptionManaging> encryptionManager;
@property (retain, nonatomic) id<SKAAccountProviding> accountProvider;
@property (retain, nonatomic) id<SKAInvitationManaging> invitationManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalWorkQueue;
@property char pendingRequestScheduled;
@property char clientIsRateLimited;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;
+ (id)_errorForDuplicateStatusPublishRequestWithIdentifier:(id)a0;
+ (id)_errorForRateLimit;
+ (id)_errorForStatusPublishRequestWithIdentifier:(id)a0 requestedStatusCreationDate:(id)a1 isOlderThanExistingStatus:(id)a2 existingStatusCreationDate:(id)a3;
+ (id)_noPersonalChannelErrorForStatusTypeIdentifier:(id)a0;

- (void).cxx_destruct;
- (void)provisionPayloads:(id)a0 statusTypeIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)publishPendingRequestForReason:(long long)a0;
- (void)_markPublishAttempt;
- (long long)_maxRapidPublishes;
- (long long)_maxRetryCount;
- (double)_pendingDelayTime;
- (void)_publishStatusRequest:(id)a0 statusTypeIdentifier:(id)a1 afterTime:(double)a2 isPendingPublish:(char)a3 retryCount:(unsigned long long)a4 completion:(id /* block */)a5;
- (double)_rapidPublishesTimescale;
- (double)_rateLimitDelayTime;
- (void)_removePendingPublishRequestWithUniqueIdentifier:(id)a0 databaseContext:(id)a1;
- (void)_removePendingPublishRequestsForStatusTypeIdentifier:(id)a0 olderThanRequest:(id)a1 databaseContext:(id)a2;
- (char)_shouldAbandonRequestForError:(id)a0;
- (char)_shouldAllowPublishForPublishRequest:(id)a0 onChannel:(id)a1 error:(id *)a2;
- (char)_shouldClientRateLimit;
- (char)_shouldReauthForError:(id)a0;
- (char)_shouldRetryWithDelayForError:(id)a0;
- (char)_shouldRollChannelForError:(id)a0;
- (void)createPersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (void)ensurePendingPublishRequestExistsWithPublishRequest:(id)a0 forStatusTypeIdentifier:(id)a1 databaseContext:(id)a2;
- (void)findOrCreatePersonalChannelForStatusTypeIdentifier:(id)a0 databaseContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithDatabaseManager:(id)a0 channelManager:(id)a1 accountProvider:(id)a2 encryptionManager:(id)a3 invitationManager:(id)a4;
- (void)publishPendingRequestsWithDelay:(double)a0;
- (void)publishStatusRequest:(id)a0 statusTypeIdentifier:(id)a1 afterTime:(double)a2 isPendingPublish:(char)a3 completion:(id /* block */)a4;
- (void)removePendingPublishRequestsForStatusTypeIdentifier:(id)a0 olderThanRequest:(id)a1;

@end
