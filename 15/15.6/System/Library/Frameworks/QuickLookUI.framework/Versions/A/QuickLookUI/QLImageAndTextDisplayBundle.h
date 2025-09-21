@class NSView, NSString, NSArray, QLAccessibilityUIElement, QLImageAndTextViewController, NSDictionary, QLImageAndTextLayer, QLLayerBasedPreviewContainerView;

@interface QLImageAndTextDisplayBundle : QLDisplayBundle <QLAccessibilityUIElementDelegate> {
    QLImageAndTextLayer *_imageAndTextLayer;
    NSDictionary *_uiElements;
    QLImageAndTextViewController *_imageAndTextViewController;
    NSView *_textView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *title;
@property (readonly) NSString *subTitle;
@property (readonly) NSArray *properties;
@property (readonly) NSString *topText;
@property (readonly) NSDictionary *titleAttributes;
@property (readonly) NSDictionary *subTitleAttributes;
@property (readonly) NSDictionary *labelAttributes;
@property (readonly) NSDictionary *valueAttributes;
@property (readonly) NSDictionary *topTextAttributes;
@property (readonly) struct CGSize { double x0; double x1; } defaultImageSize;
@property (readonly) char hasDarkBackground;
@property (readonly) char hasLargeProperties;
@property (readonly) char showsScreenTimeLockout;
@property (retain) QLAccessibilityUIElement *textAccessibilityElement;
@property (retain) QLAccessibilityUIElement *imageAccessibilityElement;
@property (readonly) char contentsLoaded;
@property (retain) QLLayerBasedPreviewContainerView *imageAndTextView;

+ (id)newDisplayBundleViewController;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setHighlighted:(char)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentFrame;
- (char)highlighted;
- (void)setBottomMargin:(double)a0;
- (void)updateMetrics;
- (void)updateText;
- (void)didEndLiveResize;
- (void)willStartLiveResize;
- (void)didShow;
- (void)setupTextView;
- (char)_teardownDefaultModeIfNecessary;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElementInParentSpace:(id)a0;
- (id)_attributedStringForValue:(id)a0 attributes:(id)a1 label:(id)a2 space:(float)a3;
- (id)_attributedTitleWithHourglass;
- (char)_setupDefaultModeIfNecessary;
- (char)_setupSpotlightModeIfNecessary;
- (char)_teardownSpotlightModeIfNecessary;
- (void)_updateAccessibilityElementLayout;
- (void)backingScaleFactorDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })contentViewBorderFrame;
- (void)forceUpdateLayoutItems;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForUIElement:(id)a0;
- (void)imageAndTextViewFrameChanged:(id)a0;
- (id)initWithPreview:(id)a0 owner:(id)a1;
- (void)modeDidChange;
- (id)quickLookContentView;
- (void)set_QLBundleAppearance:(id)a0;
- (void)setupAccessibilityElements;
- (id)sizingConstraints;
- (void)teardownTextView;

@end
