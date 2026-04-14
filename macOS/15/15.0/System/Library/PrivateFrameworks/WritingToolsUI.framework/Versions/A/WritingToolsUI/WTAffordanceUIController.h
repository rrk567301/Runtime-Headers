@class NSString, NSView, WTAffordanceView, WTAffordanceWindow, NSTrackingArea;

@interface WTAffordanceUIController : NSObject <NSWindowDelegate>

@property (retain, nonatomic) WTAffordanceWindow *affordanceWindow;
@property (weak, nonatomic) NSView *affordanceTrackingView;
@property (weak, nonatomic) WTAffordanceView *affordanceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } selectionRect;
@property (weak, nonatomic) NSView *positioningView;
@property (nonatomic) long long uiState;
@property (nonatomic) BOOL needsSelectionTrackingAreaUpdate;
@property (retain, nonatomic) NSTrackingArea *affordanceTrackingArea;
@property (retain, nonatomic) NSTrackingArea *selectionTrackingArea;
@property (retain, nonatomic) NSView *affordanceTrackingViewDebug;
@property (retain, nonatomic) NSView *selectionTrackingViewDebug;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)numberOfSelectedLinesOfTextIsAtLeast:(unsigned long long)a0 client:(id)a1 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 rectOriginYPrev:(double)a3 exitAfter:(unsigned long long)a4 completionHandler:(id /* block */)a5;
+ (BOOL)shouldColorizeDebug;

- (id)init;
- (void).cxx_destruct;
- (void)dismiss;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)fadeAffordanceViewWithIsFadeIn:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })calculateFrameOrigin;
- (BOOL)cursorIsOnTopOfTrackingArea;
- (void)hideColorizedViewsDebug;
- (void)hideWithAnimate:(id)a0;
- (void)removeSelectionTrackingArea;
- (void)scheduleShowAffordanceForSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 ofView:(id)a1 forDelegate:(id)a2 onClick:(id /* block */)a3;
- (void)showColorizedViewsDebug;
- (void)showWithAnimate:(id)a0;
- (void)updateSelectionTrackingAreaIfNeeded;

@end
