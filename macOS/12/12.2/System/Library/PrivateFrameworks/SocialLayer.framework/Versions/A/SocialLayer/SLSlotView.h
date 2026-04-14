@class NSString, UISSlotStyle;
@protocol UISSlotDrawer, UISSlotAnyContent;

@interface SLSlotView : NSView {
    id<UISSlotDrawer> _localSlotDrawer;
    id _localTag;
    NSString *_localization;
    id /* block */ _slotContentProvider;
    UISSlotStyle *_currentSlotStyle;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    id<UISSlotAnyContent> _slotContent;
    unsigned long long _currentGeneration;
}

@property (copy, nonatomic, setter=_setRemoteContentProvider:) id /* block */ _remoteContentProvider;
@property (copy, nonatomic, setter=_setSlotContentProvider:) id /* block */ _slotContentProvider;

+ (id)_sharedLayerContext;
+ (id)_overlaySlotViewInView:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)_updateContent;
- (id)_slotStyle;
- (void)_slotStyleDidChange;
- (void)_setSlotContent:(id)a0 atYieldGeneration:(unsigned long long)a1;
- (void)_updateLocalContentWithLastSlotStyle:(id)a0;
- (void)windowDidChangeBackingProperties;
- (id)initWithLocalSlotDrawer:(id)a0 localTag:(id)a1;
- (void)_updateRemoteContent;

@end
