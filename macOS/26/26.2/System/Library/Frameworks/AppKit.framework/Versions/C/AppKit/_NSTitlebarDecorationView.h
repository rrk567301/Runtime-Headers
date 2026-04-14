@class CALayer, NSTitlebarContainerView;

@interface _NSTitlebarDecorationView : NSView {
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    CALayer *_bottomSeparatorLayer;
}

@property BOOL drawsBottomSeparator;
@property (weak) NSTitlebarContainerView *titlebarContainerView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (BOOL)clipsToBounds;
- (void)addSubview:(id)a0;
- (void)updateLayer;
- (void)layout;
- (void).cxx_destruct;
- (void)viewDidChangeBackingProperties;
- (void)dealloc;
- (id)_titlebarDecorationCoreUIOptions;
- (double)_trailingSidebarWidth;
- (void)_updateBottomSeparatorLayer;
- (void)_updateTopHighlightLayer;

@end
