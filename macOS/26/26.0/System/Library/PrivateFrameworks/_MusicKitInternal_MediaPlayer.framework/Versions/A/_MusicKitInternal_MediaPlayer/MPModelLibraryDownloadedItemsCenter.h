@interface MPModelLibraryDownloadedItemsCenter : NSObject

@property (class, nonatomic, readonly) MPModelLibraryDownloadedItemsCenter *sharedDownloadedItemsCenter;

- (void)reset;
- (id)init;
- (void).cxx_destruct;
- (void)applyDownloadedItemsSnapshot:(id)a0;

@end
