@class CALayer, NSTitlebarContainerView;

@interface _NSTitlebarDecorationView : NSView {
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    CALayer *_bottomSeparatorLayer;
}

@property BOOL drawsBottomSeparator;
@property (weak) NSTitlebarContainerView *titlebarContainerView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)addSubview:(id)a0;
- (void)layout;
- (void)viewDidChangeBackingProperties;
- (BOOL)clipsToBounds;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)dealloc;
- (id)_titlebarDecorationCoreUIOptions;
- (double)_trailingSidebarWidth;
- (void)_updateBottomSeparatorLayer;
- (void)_updateTopHighlightLayer;

@end
