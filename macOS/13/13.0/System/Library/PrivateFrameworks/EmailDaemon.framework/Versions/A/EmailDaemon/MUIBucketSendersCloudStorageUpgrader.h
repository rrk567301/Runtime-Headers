@class CNContactStore, NSArray, NSString, MUIBucketSenderCloudStorage, NSObject;
@protocol OS_dispatch_queue, MUIBucketSendersCloudStorageUpgraderDelegate, EFAssertableScheduler;

@interface MUIBucketSendersCloudStorageUpgrader : NSObject <EFContentProtectionObserver>

@property (readonly, weak, nonatomic) id<MUIBucketSendersCloudStorageUpgraderDelegate> delegate;
@property (readonly, nonatomic) MUIBucketSenderCloudStorage *cloudStorage;
@property (readonly, nonatomic) NSArray *sentMailboxURLs;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) id<EFAssertableScheduler> scheduler;
@property (nonatomic) BOOL observingContentProtection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_upgrade;
- (void)contentProtectionStateChanged:(long long)a0 previousState:(long long)a1;
- (id)initWithDelegate:(id)a0 senderCloudStorage:(id)a1 sentMailboxURLs:(id)a2 contactStore:(id)a3;
- (void)performUpgradeIfNecessary;
- (void)_verifyDatabaseAccessAndPerformUpgrade;
- (void)_resetDatabaseAndCloud;
- (BOOL)_hasBeenUpgraded;
- (void)_markUpgradeComplete;
- (BOOL)_canAccessDatabase;

@end
