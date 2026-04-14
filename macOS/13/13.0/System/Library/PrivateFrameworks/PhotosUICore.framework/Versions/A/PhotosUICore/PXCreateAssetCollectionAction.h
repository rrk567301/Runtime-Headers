@class NSString, PHCollectionList, NSArray, PHAssetCollection, PXContentSyndicationPhotoKitAssetGroup;
@protocol PXFastEnumeration;

@interface PXCreateAssetCollectionAction : PXPhotosAction

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) PHCollectionList *parentCollectionList;
@property (readonly, nonatomic) id<PXFastEnumeration> selectedAssets;
@property (readonly, nonatomic) PXContentSyndicationPhotoKitAssetGroup *assetGroup;
@property (copy, nonatomic) NSString *createdCollectionIdentifier;
@property (readonly, nonatomic) NSArray *unsavedSyndicatedAssets;
@property (readonly, nonatomic) PHAssetCollection *createdAssetCollection;

+ (void)_donateTipsAppAlbumCreationSignal;

- (void).cxx_destruct;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void)performUndo:(id /* block */)a0;
- (id)actionNameLocalizationKey;
- (void)performRedo:(id /* block */)a0;
- (id)initWithTitle:(id)a0 parentCollectionList:(id)a1 selectedAssets:(id)a2;

@end
