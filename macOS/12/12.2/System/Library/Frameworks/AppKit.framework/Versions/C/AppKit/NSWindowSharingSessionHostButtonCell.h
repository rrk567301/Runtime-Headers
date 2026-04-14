@class NSString, NSTrackingArea, NSObject;
@protocol NSWindowSharingSessionHostButtonDelegate;

@interface NSWindowSharingSessionHostButtonCell : NSButtonCell <NSMenuDelegate> {
    BOOL _acceptsHover;
    BOOL _isMouseInside;
    BOOL _trackingPopupMenu;
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
- (unsigned long long)imagePosition;
- (struct __CFString { } *)_coreUIWidgetName;
- (void)showMenu;
- (void)_setMouseTrackingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1;
- (void)_hoverTriggeredShowMenu;
- (void)startTrackingHover;
- (void)mouseEntered:(id)a0;
- (void)stopTrackingHover;
- (void)mouseExited:(id)a0;
- (id)_themeButton;
- (BOOL)_isMouseInControlView;
- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (unsigned long long)bezelStyle;
- (const struct __CFDictionary { } *)_coreUIBezelDrawOptionsWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (BOOL)_hasRolloverBezelArt;

@end
