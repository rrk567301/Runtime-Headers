@class NSView, NSString, NSCorrectionTypedTextHighlightView, NSCorrectionShadowView, NSCorrectionTextView, NSPanel, NSDictionary, NSAttributedString, NSMutableArray, NSVisualEffectView;

@interface NSCorrectionPanel : NSPanel {
    NSView *hostView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } boundingBoxInHostView;
    NSCorrectionTypedTextHighlightView *typedTextView;
    NSCorrectionTextView *correctionView;
    NSCorrectionShadowView *shadowView;
    NSPanel *correctionSubPanel;
    id /* block */ completionHandler;
    id /* block */ stringCompletionHandler;
    NSAttributedString *primaryCandidate;
    NSMutableArray *alternativeCandidates;
    BOOL dismissedExternally;
    NSVisualEffectView *contentBackgroundMaterialView;
}

@property BOOL useDefaultStringAttributes;
@property BOOL dismissedExplicitly;
@property (copy) NSDictionary *correctionAttributes;
@property (readonly) NSString *correction;
@property (readonly) long long correctionPanelType;

+ (id)sharedCorrectionPanel;

- (void)dealloc;
- (id)correction;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityChildrenAttribute;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (void)dismiss;
- (void)_interceptEvents;
- (void)_setLastCorrectionPanelExplicitlyAccepted:(BOOL)a0 rejected:(BOOL)a1;
- (void)_clearLastCorrectionPanel;
- (void)_doDismissAndAccept:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 backing:(unsigned long long)a1 defer:(BOOL)a2;
- (id)_maskImageWithSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_highlightRectForTypedText:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldCorrectionViewBeAtBottom:(double)a0 highlightRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inScreenVisibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_adjustLayoutForView:(id)a0;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 withReplacement:(id)a2 forType:(long long)a3 completionHandler:(id /* block */)a4;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 withReplacement:(id)a2 completionHandler:(id /* block */)a3;
- (void)_updateCorrectionViewForPanelType:(long long)a0 inView:(id)a1;
- (void)_dismissAndAccept:(BOOL)a0;
- (void)showPanelAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 primaryString:(id)a2 alternativeStrings:(id)a3 forType:(long long)a4 completionHandler:(id /* block */)a5;
- (BOOL)useDefaultStringAttributes;
- (void)setUseDefaultStringAttributes:(BOOL)a0;
- (void)setCorrectionAttributes:(id)a0;
- (void)setSelectedCandidate:(unsigned long long)a0;
- (void)removeFromWindow;
- (void)dismissAndAccept:(BOOL)a0;

@end
