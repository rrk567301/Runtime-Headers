@interface MPModelLibraryDownloadedItemsCenter : NSObject

@property (class, nonatomic, readonly) MPModelLibraryDownloadedItemsCenter *sharedDownloadedItemsCenter;

- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (void)applyDownloadedItemsSnapshot:(id)a0;

@end
