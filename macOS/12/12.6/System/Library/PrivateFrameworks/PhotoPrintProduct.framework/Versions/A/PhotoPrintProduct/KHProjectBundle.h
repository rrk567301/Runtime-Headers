@class NSURL, NSMutableDictionary, NSDate, NSObject, KHImage, NSString, NSUndoManager, KHProjectGroup, KHProjectLayout, NSMutableSet, NSRecursiveLock, KHUserProjectDatabase, KHProject;
@protocol OS_dispatch_queue;

@interface KHProjectBundle : NSObject {
    KHImage *_previewImage;
    NSRecursiveLock *_previewImageLock;
    NSObject<OS_dispatch_queue> *_databaseActivityQueue;
}

@property (readonly, nonatomic) NSURL *infoURL;
@property (nonatomic) unsigned long long previewImageHash;
@property (readonly, nonatomic) NSMutableDictionary *propertyCache;
@property (readonly, nonatomic) NSMutableSet *databaseActivityRecords;
@property (readonly, nonatomic) KHUserProjectDatabase *database;
@property (nonatomic) unsigned long long databaseClosingDelay;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSURL *databaseURL;
@property (readonly, nonatomic) NSURL *previewImageURL;
@property (readonly, nonatomic) BOOL previewImageExists;
@property (readonly, nonatomic) unsigned long long previewImageVersion;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) KHProjectGroup *projectGroup;
@property (readonly, nonatomic) KHProject *project;
@property (readonly, nonatomic) KHProjectLayout *posterLayout;
@property (readonly, nonatomic) NSUndoManager *undoManager;
@property (readonly, nonatomic) NSString *themeIdentifier;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long defaultType;

+ (id)bundleWithURL:(id)a0;
+ (id)defaultSortDescriptors;
+ (id)previewImageNameForProject:(id)a0;

- (void)dealloc;
- (id)description;
- (id)objectForKeyedSubscript:(id)a0;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_commonInit;
- (id)previewImage;
- (void)setPreviewImage:(id)a0;
- (void)closeDatabase;
- (void)cloneInBundle:(id)a0;
- (id)databaseActivityWithReason:(id)a0;
- (void)createProjectWithInfo:(id)a0 downloadHandler:(id /* block */)a1 completionHandler:(id /* block */)a2;
- (void)databaseActivityDidEnd:(id)a0;
- (void)_projectCoverInvalidated:(id)a0;
- (id)_initWithSQLiteInMemoryDatabaseURL:(id)a0;
- (void)_saveProperties;
- (void)_loadProperties;
- (id)_onQueueActivityWithReason:(id)a0;
- (id)databaseActivityWithReason:(id)a0 arguments:(char *)a1;
- (void)performDatabaseActivity:(id /* block */)a0;
- (id)nextProjectUUID;
- (void)updateWithPhotoInfos:(id)a0;
- (id)previewImageName;
- (id)previewImageWithSize:(struct CGSize { double x0; double x1; })a0 hash:(unsigned long long)a1 ignorePlaceholder:(BOOL)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })insetsForPreviewImage;
- (id)previewImageWithSize:(struct CGSize { double x0; double x1; })a0 hash:(unsigned long long)a1;
- (void)notifyAddedPhotosWithUUIDs:(id)a0;
- (void)clearPropertyCache;
- (void)notifyRemovedPhotosWithUUIDs:(id)a0;
- (void)notifyResetForReuse:(BOOL)a0;
- (id)createProjectWithType:(long long)a0 theme:(id)a1 productCode:(id)a2 name:(id)a3;
- (id)createProjectWithType:(long long)a0 theme:(id)a1 productCode:(id)a2 name:(id)a3 params:(id)a4 photos:(id)a5;
- (id)createProjectGroupWithName:(id)a0;
- (id)createDuplicateProjectWithProject:(id)a0;
- (void)updateWithProductCode:(id)a0 themeIdentifier:(id)a1 downloadHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (id)previewImageWithSize:(struct CGSize { double x0; double x1; })a0;

@end
