@class PHCloudIdentifier, NSString, NSArray, PHImportSource;
@protocol PXDisplayAsset, PXDisplayCollectionList, PXDisplayCollection, PXDisplayAssetCollection, PXDisplayPerson, PXDisplaySocialGroup, NSObject;

@interface PXProgrammaticNavigationDestination : NSObject {
    NSString *_userAlbumName;
}

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long revealMode;
@property (readonly, nonatomic) long long openMode;
@property (readonly, nonatomic) long long routingType;
@property (readonly, nonatomic) NSString *source;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, copy, nonatomic) PHCloudIdentifier *assetCloudIdentifier;
@property (readonly, nonatomic) id<PXDisplayAsset> asset;
@property (readonly, copy, nonatomic) NSString *assetCollectionUUID;
@property (readonly, copy, nonatomic) NSString *assetCollectionLocalIdentifier;
@property (readonly, copy, nonatomic) PHCloudIdentifier *assetCollectionCloudIdentifier;
@property (readonly, copy, nonatomic) NSString *assetCollectionTransientIdentifier;
@property (readonly, nonatomic) long long assetCollectionType;
@property (readonly, nonatomic) long long assetCollectionSubtype;
@property (readonly, nonatomic) unsigned short utilityCollectionType;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly, copy, nonatomic) NSString *collectionListUUID;
@property (readonly, copy, nonatomic) NSString *collectionListName;
@property (readonly, nonatomic) long long collectionListType;
@property (readonly, nonatomic) long long collectionListSubtype;
@property (readonly, nonatomic) id<PXDisplayCollectionList> collectionList;
@property (readonly, nonatomic) id<PXDisplayCollection> collection;
@property (readonly, copy, nonatomic) NSArray *collectionHierarchy;
@property (readonly, copy, nonatomic) NSString *personUUID;
@property (readonly, copy, nonatomic) NSString *personLocalIdentifier;
@property (readonly, nonatomic) id<PXDisplayPerson> person;
@property (readonly, copy, nonatomic) NSString *socialGroupUUID;
@property (readonly, copy, nonatomic) NSString *socialGroupLocalIdentifier;
@property (readonly, nonatomic) id<PXDisplaySocialGroup> socialGroup;
@property (readonly, nonatomic) PHImportSource *importSource;
@property (readonly, nonatomic) NSString *importSourceUUID;
@property (readonly, nonatomic) BOOL isLibraryHome;
@property (readonly, nonatomic) BOOL isLemonadeHome;
@property (readonly, nonatomic) BOOL isCollectionsHome;
@property (readonly, nonatomic) BOOL isInCollectionsHome;
@property (readonly, nonatomic) NSString *shelfSlug;
@property (readonly, copy, nonatomic) NSString *memoryCreationText;
@property (readonly, copy, nonatomic) NSString *memoryCreationLaunchType;
@property (readonly, copy, nonatomic) PXProgrammaticNavigationDestination *sidebarBackNavigationRootDestination;
@property (readonly, nonatomic) id<NSObject> additionalAttributes;
@property (readonly, nonatomic) NSString *publicDescription;
@property (readonly, nonatomic) BOOL renderAlbumAssetsWithDeferredProcessing;
@property (readonly, nonatomic) BOOL displayAlbumOptions;
@property (readonly, nonatomic, getter=isTargetingAsset) BOOL targetingAsset;
@property (readonly, nonatomic, getter=isTargetingAlbum) BOOL targetingAlbum;
@property (readonly, nonatomic) BOOL wantsEditMode;
@property (readonly, copy, nonatomic) NSString *completionKey;
@property (readonly, copy, nonatomic) NSString *libraryViewMode;
@property (readonly, nonatomic) BOOL shouldExcludeSidebar;
@property (readonly, nonatomic) BOOL wantsPlaybackMode;

+ (id)memoryCreationDestinationWithPrompt:(id)a0;

- (id)description;
- (id)initWithURL:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSearchText:(id)a0;
- (BOOL)isEqualToNavigationDestination:(id)a0;
- (id)initWithImportSource:(id)a0 revealMode:(long long)a1;
- (id)initWithObject:(id)a0 revealMode:(long long)a1;
- (id)initWithObject:(id)a0 revealMode:(long long)a1 routingType:(long long)a2;
- (id)initWithSearchTerm:(id)a0;
- (id)initWithType:(long long)a0 revealMode:(long long)a1;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 asset:(id)a2 assetCollection:(id)a3;
- (id)initWithType:(long long)a0 revealMode:(long long)a1 assetUUID:(id)a2 assetCollectionUUID:(id)a3;
- (BOOL)isEquivalentToNavigationDestination:(id)a0;

@end
