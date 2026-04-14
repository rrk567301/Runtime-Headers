@class NSUUID, NSString, NSNumber, NSObject;
@protocol HMMTRStorageDelegate, HMMTRFabricStorageDataSource, OS_dispatch_queue, HMMTRStorageDataSource;

@interface HMMTRStorageEventDispatcher : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMMTRStorageDelegate> delegate;
@property (readonly) NSNumber *fabricID;
@property (readonly) NSUUID *fabricUUID;
@property (retain) id<HMMTRFabricStorageDataSource> fabricDataSource;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) BOOL caseAuthenticatedTagsUpdated;
@property (weak) id<HMMTRStorageDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)shortDescription;

- (id)initWithQueue:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)handleUpdatedCurrentFabricIndex;
- (void)handlePrimaryResidentDataReady;
- (void)handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (void)_handleUpdatedDataWithIsLocalChange:(BOOL)a0;
- (void)handleUpdatedDataForFabricIndex:(id)a0 isLocalChange:(BOOL)a1;
- (void)handleUpdatedDataForFabricIndex:(id)a0 nodeID:(id)a1 isLocalChange:(BOOL)a2;

@end
