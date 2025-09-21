@class ISIcon;

@interface NSThemeDocumentButton : NSDocumentDragButton {
    ISIcon *_icon;
    unsigned char _documentEdited : 1;
    unsigned char _menuVisible : 1;
    unsigned char _ignoreRentry : 1;
    unsigned char _isObservingIconAppearance : 1;
}

@property (readonly) BOOL isPopupVisible;
@property (getter=isMenuVisible) BOOL menuVisible;

+ (void)initialize;
+ (BOOL)clipsToBounds;

- (void)mouseDown:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)dealloc;
- (void).cxx_destruct;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })menuLocationForLayoutDirection:(BOOL)a0;
- (id)_containingThemeFrameFromView:(id)a0;
- (void)_didChangeIconAppearanceConfiguration:(id)a0;
- (void)_invalidateDocumentIcon;
- (void)_refreshDocumentIconAndDisplayNameForURL:(id)a0;
- (void)_setRepresentedURL:(id)a0;
- (BOOL)documentEdited;
- (id)originalWindow;
- (void)pathCellClicked:(id)a0;
- (id)representedURL;
- (void)setDocumentEdited:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(BOOL)a1;
- (void)setRepresentedFilename:(id)a0;
- (void)setRepresentedURL:(id)a0;
- (void)showPopup;

@end
