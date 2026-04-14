@class NSObject;
@protocol OS_dispatch_queue;

@interface IMDaemonCoreSpotlightUtilities : NSObject

@property (class, readonly, nonatomic) long long batchIndexingIntervalBagValue;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *spotlightIndexQueue;
@property (class, readonly, nonatomic) BOOL needsIndexingDeletionForMigration;

@end
