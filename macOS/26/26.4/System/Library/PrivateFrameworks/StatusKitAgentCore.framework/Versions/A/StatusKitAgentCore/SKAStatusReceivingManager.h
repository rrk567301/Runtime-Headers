@class NSString, NSObject;
@protocol OS_dispatch_queue, SKACloudDatabaseManaging, SKAServerBagProviding, SKALocalDatabaseManaging, SKAStatusReceivingManagingDelegate;

@interface SKAStatusReceivingManager : NSObject <SKAStatusReceivingManaging>

@property (retain, nonatomic) id<SKACloudDatabaseManaging> cloudDatabaseManager;
@property (retain, nonatomic) id<SKALocalDatabaseManaging> localDatabaseManager;
@property (weak, nonatomic) id<SKAStatusReceivingManagingDelegate> delegate;
@property (retain, nonatomic) id<SKAServerBagProviding> serverBag;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundCleanupQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)initWithCloudDatabaseManager:(id)a0 localDatabaseManager:(id)a1 delegate:(id)a2 serverBag:(id)a3;
- (void)handleIncomingStatusData:(id)a0 onChannelIdentifier:(id)a1 dateReceived:(id)a2 dateExpired:(id)a3 serverTime:(id)a4;
- (void).cxx_destruct;

@end
