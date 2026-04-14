@class NSString, NSTrackingArea, NSMenu, NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButtonCell : NSButtonCell <NSMenuDelegate> {
    BOOL _acceptsHover;
    BOOL _isMouseInside;
    NSMenu *_popupMenu;
    NSTrackingArea *_exitTrackingArea;
}

@property (weak) NSObject<NSWindowSharingSessionHostButtonDelegate> *delegate;
@property BOOL acceptsHover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)target;
- (SEL)action;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (const struct __CFDictionary { } *)_coreUIBezelDrawOptionsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct __CFString { } *)_coreUIWidgetName;
- (BOOL)_hasRolloverBezelArt;
- (void)_hoverTriggeredShowMenu;
- (BOOL)_isMouseInControlView;
- (id)_themeButton;
- (unsigned long long)bezelStyle;
- (void)closeMenu;
- (unsigned long long)imagePosition;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)showMenu;
- (void)startTrackingHover;
- (void)stopTrackingHover;

@end
