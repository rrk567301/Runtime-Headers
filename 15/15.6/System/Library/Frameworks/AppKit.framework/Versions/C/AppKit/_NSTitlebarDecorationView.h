@class CALayer, NSTitlebarContainerView;

@interface _NSTitlebarDecorationView : NSView {
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    CALayer *_bottomSeparatorLayer;
}

@property char drawsBottomSeparator;
@property (weak) NSTitlebarContainerView *titlebarContainerView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (id)_titlebarDecorationCoreUIOptions;
- (double)_trailingSidebarWidth;
- (void)_updateBottomSeparatorLayer;
- (void)_updateTopHighlightLayer;
- (void)addSubview:(id)a0;
- (char)clipsToBounds;
- (void)updateLayer;
- (void)viewDidChangeBackingProperties;

@end
