@class NSRecursiveLock, NSString, NSDate, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface KHProjectGroup : KHModel <KHAssetGeneration> {
    NSString *_name;
    NSDate *_date;
    long long _status;
    NSMutableArray *_projects;
    NSRecursiveLock *_projectLock;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *price;
@property (readonly, nonatomic) NSString *themeIdentifier;

+ (void)setMaximumNumberOfProjects:(unsigned long long)a0;
+ (unsigned long long)maximumNumberOfProjects;
+ (id)createInDatabase:(id)a0 withName:(id)a1 uuid:(id)a2;
+ (id)createInDatabase:(id)a0 withName:(id)a1;

- (void)dealloc;
- (id)name;
- (id)init;
- (id)date;
- (void)setName:(id)a0;
- (long long)status;
- (void)unload;
- (void)remove;
- (id)creationDate;
- (void)setDate:(id)a0;
- (id)clone;
- (void)setStatus:(long long)a0;
- (void)setRecipientAddresses:(id)a0;
- (id)recipientAddresses;
- (id)projects;
- (long long)sortById:(id)a0;
- (long long)sortByDate:(id)a0;
- (BOOL)isProjectModel;
- (void)addProject:(id)a0;
- (void)removeProject:(id)a0;
- (void)cacheDate:(id)a0;
- (id)initWithUuid:(id)a0 forEntity:(id)a1;
- (void)cacheName:(id)a0;
- (id)cloneInDatabase:(id)a0 withUuid:(id)a1;
- (id)photoIds;
- (void)cacheDateWithString:(id)a0;
- (void)cacheStatus:(long long)a0;
- (id)firstProject;
- (void)clearProjectCache;
- (void)addProject:(id)a0 notify:(BOOL)a1;
- (void)removeProject:(id)a0 notify:(BOOL)a1;
- (BOOL)canAddProject;
- (BOOL)canRemoveProject;
- (void)reevaluateName;
- (id)projectsWithContentIssueOfType:(unsigned long long)a0;
- (long long)sortByDateDescending:(id)a0;
- (void)setReturnAddress:(id)a0;
- (id)generateAssetsInDirectoryAtPath:(id)a0 assetIdentifier:(id)a1 progress:(id)a2 error:(id *)a3;
- (unsigned long long)numberOfResourcesThatRequireGenerationWithinDirectory:(id)a0 assetIdentifier:(id)a1;
- (id)generateAssetThumbnailsInDirectoryAtPath:(id)a0 assetIdentifier:(id)a1 progress:(id)a2 error:(id *)a3;
- (id)_projectForAssetId:(id)a0;

@end
