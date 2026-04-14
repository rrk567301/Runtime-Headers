@class PHPhotoLibrary, NSString;

@interface PXTripsFeedConfiguration : PXFeedConfiguration <PXChangeObserver, PXCollectionsDataSourceManagerObserver>

@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_photoKitMediaProviderWithPhotoLibrary:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)hidesBackButton;
- (id)viewControllerTitle;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_defaultSpecManagerWithExtendedTraitCollection:(id)a0;
- (void)_handleDataSourceChange;
- (BOOL)allowsPopOnEmptyBehavior;
- (id)initWithDataSourceManagerPromise:(id /* block */)a0 specManagerPromise:(id /* block */)a1 itemLayoutFactory:(id)a2;
- (id)initWithPhotoLibrary:(id)a0 actionPerformer:(id)a1;
- (id)objectReferenceForDestination:(id)a0;
- (BOOL)wantsEmbeddedScrollView;

@end
