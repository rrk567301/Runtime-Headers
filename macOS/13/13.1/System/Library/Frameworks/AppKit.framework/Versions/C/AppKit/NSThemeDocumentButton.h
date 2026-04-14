@interface NSThemeDocumentButton : NSDocumentDragButton {
    BOOL _documentEdited;
    BOOL _menuVisible;
    struct OpaqueIconRef { } *_iconRef;
    unsigned char _ignoreRentry : 1;
}

@property (readonly) BOOL isPopupVisible;

+ (void)initialize;

- (void)dealloc;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)mouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)_invalidateDocumentIcon;
- (BOOL)documentEdited;
- (void)setRepresentedURL:(id)a0;
- (void)setRepresentedFilename:(id)a0;
- (void)setDocumentEdited:(BOOL)a0;
- (id)originalWindow;
- (id)representedURL;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(BOOL)a1;
- (void)_setRepresentedURL:(id)a0;
- (struct CGPoint { double x0; double x1; })menuLocationForLayoutDirection:(BOOL)a0;
- (id)_containingThemeFrameFromView:(id)a0;
- (void)showPopup;
- (void)pathCellClicked:(id)a0;
- (BOOL)isMenuVisible;
- (void)setMenuVisible:(BOOL)a0;
- (void)_refreshDocumentIconAndDisplayNameForURL:(id)a0;

@end
