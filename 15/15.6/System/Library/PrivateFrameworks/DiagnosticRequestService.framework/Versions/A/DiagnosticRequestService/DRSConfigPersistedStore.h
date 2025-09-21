@class NSManagedObjectContext, NSString, DRSTaskingCloudKitHelper, NSPersistentContainer;

@interface DRSConfigPersistedStore : NSObject

@property (readonly, nonatomic) NSPersistentContainer *container;
@property (readonly, nonatomic) NSManagedObjectContext *context;
@property (readonly, nonatomic) NSString *workingDirectory;
@property (readonly, nonatomic) char isReadOnly;
@property (readonly, nonatomic) DRSTaskingCloudKitHelper *cloudKitHelper;

- (void).cxx_destruct;
- (id)configMetadataForUUID:(id)a0 errorOut:(id *)a1;
- (id)_ON_MOC_cloudChannelConfigMOs;
- (void)_ON_MOC_deleteCloudChannelConfigMOs:(id)a0;
- (unsigned long long)_countForFetchRequest:(id)a0 withPredicate:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
- (char)addConfigMetdata:(id)a0 errorOut:(id *)a1;
- (char)applyWaitingConfigWithUUID:(id)a0 appliedDate:(id)a1 errorOut:(id *)a2;
- (char)clearStoreWithErrorOut:(id *)a0;
- (id)cloudChannelConfig;
- (char)completeConfigWithUUID:(id)a0 completedDate:(id)a1 completionType:(unsigned long long)a2 completionDescription:(id)a3 errorOut:(id *)a4;
- (unsigned long long)configCountForPredicate:(id)a0 fetchLimit:(unsigned long long)a1 withErrorOut:(id *)a2;
- (id)configMetadatasForPredicate:(id)a0 sortDescriptors:(id)a1 fetchLimit:(unsigned long long)a2 errorOut:(id *)a3;
- (id)initWithWorkingDirectory:(id)a0 isReadOnly:(char)a1 cloudKitHelper:(id)a2 errorOut:(id *)a3;
- (unsigned long long)metadataCountForPredicate:(id)a0 fetchLimit:(unsigned long long)a1 withErrorOut:(id *)a2;
- (char)updateCloudChannelConfig:(id)a0 errorOut:(id *)a1;

@end
