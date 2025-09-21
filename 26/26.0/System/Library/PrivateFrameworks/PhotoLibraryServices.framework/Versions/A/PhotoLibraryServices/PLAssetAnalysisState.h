@class NSString, NSDate, PLManagedAsset;

@interface PLAssetAnalysisState : PLManagedObject

@property (retain, nonatomic) PLManagedAsset *asset;
@property (nonatomic) short workerType;
@property (nonatomic) int analysisState;
@property (retain, nonatomic) NSString *assetUUID;
@property (retain, nonatomic) NSDate *lastIgnoredDate;
@property (retain, nonatomic) NSDate *ignoreUntilDate;
@property (nonatomic) int workerFlags;
@property (nonatomic) double sortToken;

+ (id)entityName;
+ (id)workerTypesPersistingAnalysisState;
+ (id)_batchOperationQueue;
+ (BOOL)resetFaceCropAnalysisStateInLibraryAtURL:(id)a0 error:(id *)a1;
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)a0;
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)a0;

- (id)debugLogDescription;

@end
