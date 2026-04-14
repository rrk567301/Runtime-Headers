@class PHAssetCollection, PHAsset, _TtC12PhotosUICoreP33_72957237144B45E4FC71425D02BA38B144PXSensitiveAssetMoreHelpAlertDelegateHandler, SCNSMoreHelpMenu;

@interface PXSensitiveAssetMoreHelpAlertManager : NSObject

@property (nonatomic, readonly) PHAsset *asset;
@property (nonatomic, retain) SCNSMoreHelpMenu *alert;
@property (nonatomic, readonly) _TtC12PhotosUICoreP33_72957237144B45E4FC71425D02BA38B144PXSensitiveAssetMoreHelpAlertDelegateHandler *delegateHandler;
@property (nonatomic, readonly) PHAssetCollection *sharedAlbum;
@property (nonatomic, weak) void /* function */ presentingWindow;
@property (nonatomic, readonly) BOOL canPresentAlert;

- (id)init;
- (void).cxx_destruct;
- (void)beginModelPresentation:(id)a0;
- (void)createAlertIfNeeded;
- (id)initWithAsset:(id)a0 sharedAlbum:(id)a1 presentingWindow:(id)a2;

@end
