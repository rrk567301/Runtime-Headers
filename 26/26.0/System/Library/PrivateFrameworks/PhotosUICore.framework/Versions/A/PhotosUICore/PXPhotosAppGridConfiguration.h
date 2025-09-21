@class PXContentPrivacyController, NSDictionary, PXSearchQueryMatchInfo, PXPhotosViewOptionsModel;
@protocol PXPhotosAppSpecificGridDelegate;

@interface PXPhotosAppGridConfiguration : NSObject <PXPhotosViewAppSpecificConfiguration>

@property (retain, nonatomic) PXContentPrivacyController *privacyController;
@property (copy, nonatomic) PXSearchQueryMatchInfo *searchQueryMatchInfo;
@property (copy, nonatomic) NSDictionary *searchContextualVideoThumbnailIdentifiers;
@property (retain, nonatomic) PXPhotosViewOptionsModel *viewOptionsModel;
@property (nonatomic) BOOL hidesViewOptionsToolbar;
@property (nonatomic) BOOL alwaysIncludeSharedWithYouAssets;
@property (weak, nonatomic) id<PXPhotosAppSpecificGridDelegate> photosAppGridDelegate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)createContentControllerHelperWithConfiguration:(id)a0 contentController:(id)a1;
- (id)createViewModelHelperWithConfiguration:(id)a0 viewModel:(id)a1;

@end
