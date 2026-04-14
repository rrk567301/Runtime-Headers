@interface MPModelLibraryDownloadedItemsCenter : NSObject

@property (class, nonatomic, readonly) MPModelLibraryDownloadedItemsCenter *sharedDownloadedItemsCenter;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)applyDownloadedItemsSnapshot:(id)a0;

@end
