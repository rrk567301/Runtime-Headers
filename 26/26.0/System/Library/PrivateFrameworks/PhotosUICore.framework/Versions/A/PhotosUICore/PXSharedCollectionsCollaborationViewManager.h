@class NSArray;

@interface PXSharedCollectionsCollaborationViewManager : NSObject <PHPhotoLibraryChangeObserver> {
    void /* function */ observedPhotoLibraries;
}

@property (nonatomic, readonly) id collaborationViewsById;
@property (nonatomic, copy) NSArray *observedPhotoLibraries;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)cacheCollaborationView:(id)a0 for:(id)a1;
- (id)cachedCollaborationViewFor:(id)a0;
- (id)collaborationViewForAssetCollection:(id)a0;
- (id)createCollaborationViewFor:(id)a0;
- (void)startObservingChangesFor:(id)a0;
- (void)updateCollaborationView:(id)a0 with:(id)a1;

@end
