@interface ML3MigrationDirectives : NSObject

@property (readonly, nonatomic) int originalUserVersion;
@property (nonatomic) int currentUserVersion;
@property (nonatomic) char needsToRecreateIndexes;
@property (nonatomic) char needsToRecreateTriggers;
@property (nonatomic) char needsToRemoveLocationsForItemsMissingAssets;
@property (nonatomic) char needsToReloadStoreBookmarkMetadataIdentifiers;
@property (nonatomic) char needsToReloadContainerMediaTypes;
@property (nonatomic) char needsToReloadCollectionRepresentativeItems;
@property (nonatomic) char needsAnalyze;
@property (nonatomic) char needsToAutogenerateArtworkVariants;
@property (nonatomic) char needsToUpdateSortMap;
@property (nonatomic) char forceUpdateOriginals;
@property (nonatomic) char needsToMarkArtworkPurgeable;

- (id)initWithOriginalUserVersion:(int)a0;

@end
