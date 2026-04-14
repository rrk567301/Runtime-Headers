@class CALayer, NSTitlebarContainerView;

@interface _NSTitlebarDecorationView : NSView {
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    CALayer *_bottomSeparatorLayer;
}

@property BOOL drawsBottomSeparator;
@property (weak) NSTitlebarContainerView *titlebarContainerView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)layout;
- (void)addSubview:(id)a0;
- (BOOL)clipsToBounds;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;
- (id)_titlebarDecorationCoreUIOptions;
- (double)_trailingSidebarWidth;
- (void)_updateBottomSeparatorLayer;
- (void)_updateTopHighlightLayer;

@end
