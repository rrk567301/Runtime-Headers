@class NSString, AVLegibleMediaOptionsMenuController;

@interface _WKCaptionStyleMenuControllerAVKitMac : WKCaptionStyleMenuController <AVLegibleMediaOptionsMenuControllerDelegate, NSMenuDelegate> {
    struct RetainPtr<AVLegibleMediaOptionsMenuController> { AVLegibleMediaOptionsMenuController *m_ptr; } _menuController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)captionStyleMenu;
- (void)legibleMenuController:(id)a0 didRequestCaptionPreviewForProfileID:(id)a1;
- (void)legibleMenuControllerDidRequestStoppingSubtitleCaptionPreview:(id)a0;
- (void)rebuildMenu;

@end
