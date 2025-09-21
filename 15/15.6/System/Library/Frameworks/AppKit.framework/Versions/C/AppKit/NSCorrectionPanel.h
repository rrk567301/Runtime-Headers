@class NSDictionary, NSObject, NSCorrectionTypedTextHighlightView, NSMutableArray, NSCorrectionShadowView, NSString, NSCorrectionTextView, NSAttributedString, NSVisualEffectView, NSPanel, NSView, NSArray, NSEvent;

@interface NSCorrectionPanel : NSPanel {
    NSView *hostView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBoxInHostView;
    NSCorrectionTypedTextHighlightView *typedTextView;
    NSCorrectionTextView *correctionView;
    NSCorrectionShadowView *shadowView;
    NSPanel *correctionSubPanel;
    id /* block */ completionHandler;
    id /* block */ stringCompletionHandler;
    id /* block */ selectionCompletionHandler;
    id /* block */ dismissalEventHandler;
    NSAttributedString *primaryCandidate;
    NSMutableArray *alternativeCandidates;
    NSArray *candidateImages;
    char dismissedExternally;
    NSVisualEffectView *contentBackgroundMaterialView;
    NSEvent *dismissEvent;
    char useLocalEventMonitor;
    NSObject *localEventMonitor;
    unsigned long long ignoredEventMask;
    struct CGPoint { double x; double y; } initialHostWindowOrigin;
}

@property char useDefaultStringAttributes;
@property char dismissedExplicitly;
@property (copy) NSDictionary *correctionAttributes;
@property (readonly) NSString *correction;
@property (readonly) long long correctionPanelType;
@property (copy) NSString *lastKeyString;
@property long long dismissType;
@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } range;

+ (id)sharedCorrectionPanel;

- (void)dealloc;
- (id)correction;
- (void)dismiss;
- (void)_addLocalEventMonitor;
- (void)_adjustLayoutForView:(id)a0;
- (void)_clearLastCorrectionPanel;
- (void)_dismissAndAccept:(char)a0;
- (void)_dismissAndAccept:(char)a0 event:(id)a1;
- (void)_doDismissAndAccept:(id)a0;
- (char)_handleEvent:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_highlightRectForTypedText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_interceptEvents;
- (id)_maskImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)_removeLocalEventMonitor;
- (void)_setLastCorrectionPanelExplicitlyAccepted:(char)a0 rejected:(char)a1;
- (char)_shouldCorrectionViewBeAtBottom:(double)a0 highlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inScreenVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_updateCorrectionViewForPanelType:(long long)a0 inView:(id)a1;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (char)accessibilityIsIgnored;
- (void)adjustLayoutForView:(id)a0 rectOfTypedString:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)dismissAndAccept:(char)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backing:(unsigned long long)a1 defer:(char)a2;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 backing:(unsigned long long)a2 defer:(char)a3;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 styleMask:(unsigned long long)a2 backing:(unsigned long long)a3 defer:(char)a4;
- (void)removeFromWindow;
- (void)setCorrectionAttributes:(id)a0;
- (void)setSelectedCandidate:(unsigned long long)a0;
- (void)setUseDefaultStringAttributes:(char)a0;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 primaryString:(id)a2 alternativeStrings:(id)a3 forType:(long long)a4 completionHandler:(id /* block */)a5;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 withReplacement:(id)a2 completionHandler:(id /* block */)a3;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 withReplacement:(id)a2 forType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)showPanelWithConfiguration:(id)a0;
- (char)useDefaultStringAttributes;

@end
