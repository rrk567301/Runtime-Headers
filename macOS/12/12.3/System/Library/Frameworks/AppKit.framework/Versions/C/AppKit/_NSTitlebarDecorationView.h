@class CALayer, NSTitlebarContainerView;

@interface _NSTitlebarDecorationView : NSView {
    CALayer *_decorationLayer;
    CALayer *_topHighlightLayer;
    CALayer *_bottomSeparatorLayer;
}

@property BOOL drawsBottomSeparator;
@property (weak) NSTitlebarContainerView *titlebarContainerView;

+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)dealloc;
- (void).cxx_destruct;
- (void)layout;
- (void)updateLayer;
- (void)addSubview:(id)a0;
- (void)viewDidChangeBackingProperties;
- (double)_trailingSidebarWidth;
- (id)_titlebarDecorationCoreUIOptions;
- (void)_updateTopHighlightLayer;
- (void)_updateBottomSeparatorLayer;

@end
