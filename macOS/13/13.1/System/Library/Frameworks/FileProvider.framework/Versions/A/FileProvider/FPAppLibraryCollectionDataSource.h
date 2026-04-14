@class NSObject, NSMutableDictionary, NSFileCoordinator;
@protocol FPCollectionDataSourceDelegate, OS_dispatch_group, FPCollectionDataSource;

@interface FPAppLibraryCollectionDataSource : NSObject <FPCollectionDataSourceDelegate, FPCollectionDataSource> {
    NSObject<OS_dispatch_group> *_dispatch_group;
}

@property (nonatomic) BOOL hasMoreIncoming;
@property (retain, nonatomic) id<FPCollectionDataSource> dataSource;
@property (retain, nonatomic) NSMutableDictionary *containerItemIDToAppLibraryItemIDMap;
@property (retain, nonatomic) NSFileCoordinator *fileCoordinator;
@property (readonly) unsigned long long lastForcedUpdate;
@property (weak, nonatomic) id<FPCollectionDataSourceDelegate> delegate;

- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (id)initWithSettings:(id)a0;
- (void)dataSource:(id)a0 replaceContentsWithItems:(id)a1 hasMoreChanges:(BOOL)a2;
- (void)dataSource:(id)a0 receivedUpdatedItems:(id)a1 deletedItems:(id)a2 hasMoreChanges:(BOOL)a3;
- (void)dataSource:(id)a0 wasInvalidatedWithError:(id)a1;
- (BOOL)dataSourceShouldAlwaysReplaceContents:(id)a0;
- (void)enumerationMightHaveResumed;
- (id)dispatchGroup;
- (id)extensionDataSource;

@end
