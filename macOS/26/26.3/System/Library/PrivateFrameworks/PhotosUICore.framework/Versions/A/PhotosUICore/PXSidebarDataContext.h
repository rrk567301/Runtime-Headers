@class NSOperationQueue, PXLibraryFilterState, NSPredicate, PXTabBadgeModel;
@protocol PXSidebarDataSectionEnablement;

@interface PXSidebarDataContext : NSObject

@property (readonly, nonatomic) PXLibraryFilterState *libraryFilterState;
@property (readonly, nonatomic) NSOperationQueue *workQueue;
@property (readonly, nonatomic) id<PXSidebarDataSectionEnablement> enablementProvider;
@property (readonly, nonatomic) NSPredicate *assetsFilterPredicate;
@property (readonly, nonatomic) PXTabBadgeModel *collectionsTabBadgeModel;
@property (readonly, nonatomic) PXTabBadgeModel *sharedActivityTabBadgeModel;

+ (id)standardContextWithLibraryFilterState:(id)a0 enablementProvider:(id)a1 assetsFilterPredicate:(id)a2 collectionsTabBadgeModel:(id)a3 sharedActivityTabBadgeModel:(id)a4;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLibraryFilterState:(id)a0 workQueue:(id)a1 enablementProvider:(id)a2 assetsFilterPredicate:(id)a3 collectionsTabBadgeModel:(id)a4 sharedActivityTabBadgeModel:(id)a5;
- (id)tabBadgeModelForCollection:(id)a0;

@end
