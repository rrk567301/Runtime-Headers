@class ISIcon;

@interface NSThemeDocumentButton : NSDocumentDragButton {
    char _documentEdited;
    char _menuVisible;
    ISIcon *_icon;
    unsigned char _ignoreRentry : 1;
}

@property (readonly) char isPopupVisible;

+ (void)initialize;
+ (char)clipsToBounds;

- (void)dealloc;
- (void)rightMouseDown:(id)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })menuLocationForLayoutDirection:(char)a0;
- (void)setMenuVisible:(char)a0;
- (id)_containingThemeFrameFromView:(id)a0;
- (void)_invalidateDocumentIcon;
- (void)_refreshDocumentIconAndDisplayNameForURL:(id)a0;
- (void)_setRepresentedURL:(id)a0;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (char)documentEdited;
- (char)isMenuVisible;
- (void)mouseDown:(id)a0;
- (id)originalWindow;
- (void)pathCellClicked:(id)a0;
- (id)representedURL;
- (void)setDocumentEdited:(char)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(char)a1;
- (void)setRepresentedFilename:(id)a0;
- (void)setRepresentedURL:(id)a0;
- (void)showPopup;

@end
