@class NSArray, KHProjectGroup, KHProjectBundle, NSMutableDictionary, KHProjectSubgroup, KHProjectDatabaseActivity, NSMutableArray, NSMutableOrderedSet, KHProductSubgroup, KHTheme;
@protocol KHPrintsProjectBundleControllerDelegate, KHStoreCartProtocol;

@interface KHPrintsProjectBundleController : NSObject {
    KHProductSubgroup *_provisionalProductSubgroup;
    NSMutableArray *_hydrationOperations;
    KHProjectGroup *_projectGroup;
    NSArray *_projectSubgroups;
    id _observer;
}

@property (readonly, nonatomic) NSMutableOrderedSet *photos;
@property (readonly, nonatomic) NSMutableDictionary *projectSubgroupsByProductSubgroupIdentifier;
@property (readonly, nonatomic) unsigned long long totalNumberOfLayouts;
@property (retain, nonatomic) KHProjectDatabaseActivity *databaseActivity;
@property (retain, nonatomic) KHProjectGroup *projectGroup;
@property (readonly, nonatomic) KHProjectBundle *projectBundle;
@property (readonly, nonatomic) NSArray *projectSubgroups;
@property (readonly, nonatomic) unsigned long long numberOfPrints;
@property (retain, nonatomic) KHTheme *theme;
@property (weak, nonatomic) KHProjectSubgroup *selectedProjectSubgroup;
@property (weak, nonatomic) id<KHPrintsProjectBundleControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *photoInfos;
@property (readonly, nonatomic) NSArray *hydrationOperations;
@property (readonly, nonatomic) id<KHStoreCartProtocol> cart;

+ (id)photos:(id)a0 mappedToProductsInSubgroup:(id)a1;
+ (id)orderQuantitiesForProjectLayouts:(id)a0;
+ (BOOL)canOrderPrintsForPhotos:(id)a0 error:(id *)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addPhotoInfo:(id)a0;
- (id)productSubgroupForProjectSubgroup:(id)a0;
- (id)addPhotosInProjectSubgroup:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (void)changeProjectSubgroup:(id)a0 toProductSubgroup:(id)a1;
- (void)removeProjectSubgroup:(id)a0;
- (void)clearHydrationOperations;
- (void)loadProducts:(id /* block */)a0;
- (void)addPhotos:(id)a0;
- (void)removeIfNecessary;
- (void)setProvisionalProductSubgroup:(id)a0;
- (void)_resetProjectSubgroups;
- (id)_projectSubgroupForProject:(id)a0;
- (id)_indexPathForProjectSubgroup:(id)a0;
- (void)_notifyChangeOfType:(unsigned long long)a0 forProjectSubgroupAtIndexPath:(id)a1;
- (id)initWithProjectBundle:(id)a0;
- (id)_projectSubgroupForProductSubgroup:(id)a0 createIfNecessary:(BOOL)a1;
- (void)reloadCart;
- (void)_notifyOnMainThread:(id /* block */)a0;
- (void)_notifyProjectBundleRemovalOfPhotos:(id)a0;
- (void)_addProjectForProduct:(id)a0 withPhotos:(id)a1 toProjectSubgroup:(id)a2;
- (void)_notifyProjectBundleAdditionOfPhotos:(id)a0;
- (id)projectSubgroupForProductSubgroup:(id)a0;
- (void)_addPhotos:(id)a0 toProjectSubgroup:(id)a1 forProductSubgroup:(id)a2;
- (void)_notifyModificationOfProjectSubgroup:(id)a0;
- (id)addPhotos:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (BOOL)canAddPhotos:(id)a0 error:(id *)a1;
- (id)_addPhotos:(id)a0 toProductSubgroup:(id)a1;
- (void)removeProjectLayouts:(id)a0;
- (id)_photosInProjectSubgroup:(id)a0;
- (BOOL)_canAddNumberOfPrints:(unsigned long long)a0 error:(id *)a1;
- (void)_notifyWillChangeContent;
- (void)_removeProjectSubgroup:(id)a0;
- (void)_notifyDidChangeContent;
- (void)_notifyProjectBundleResetForReuse:(BOOL)a0;
- (void)finishingOptionsDidChange;
- (void)borderOptionsDidChange;
- (void)addHydrationOperation:(id)a0;
- (BOOL)hasProvisionalProductSubgroup;
- (id)createProjectsForProvisionalProductSubgroup;
- (id)photosAddedToProductSubgroup:(id)a0;
- (id)productSubgroupIdentifiersForAllProjectSubgroups;
- (id)projectSubgroupsWithContentIssueOfType:(unsigned long long)a0;
- (id)projectPhotos;
- (void)removePhotos:(id)a0;
- (BOOL)canAddSizeForPhotosInProjectSubgroup:(id)a0 error:(id *)a1;
- (BOOL)canAddSizeForProjectLayouts:(id)a0 error:(id *)a1;
- (BOOL)addProjectLayouts:(id)a0 toProductSubgroup:(id)a1 error:(id *)a2;
- (void)changeProjectLayouts:(id)a0 toProductSubgroup:(id)a1;
- (void)removeForReuse:(BOOL)a0;
- (void)warmUpCaches;
- (BOOL)hasProjectGroup;
- (BOOL)hasProjects;
- (void)resetCartIfNecessary;

@end
