@interface MPModelLibraryDownloadedItemsCenter : NSObject

@property (class, nonatomic, readonly) MPModelLibraryDownloadedItemsCenter *sharedDownloadedItemsCenter;

- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)applyDownloadedItemsSnapshot:(id)a0;

@end
