@class NSImage, SLSIconAppearanceConfiguration, RBSymbolLayer;
@protocol NSContentStyle;

@interface _NSSimpleImageView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRectFrame;
    BOOL _shouldUseRBSymbolLayer;
    RBSymbolLayer *_symbolLayer;
    BOOL _hasRegisteredForActivationNotifications;
    double _imageMaximumEDRHeadroom;
}

@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) id<NSContentStyle> imageContentStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectFrame;
@property (readonly, copy, nonatomic) SLSIconAppearanceConfiguration *iconAppearanceConfiguration;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)removeSymbolEffectOfType:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (void)removeAllSymbolEffectsWithOptions:(id)a0 animated:(BOOL)a1;
- (void)addSymbolEffect:(id)a0 options:(id)a1 animated:(BOOL)a2;
- (void)_enableSymbolEffectsIfNecessary;
- (void)_applicationHDRSuppressionNotificationHandler:(id)a0;
- (void)_configureImageLayer:(id)a0 preferredDynamicRange:(long long)a1 animationDuration:(double)a2;
- (void)_configurePreferredDynamicRange:(long long)a0 animated:(BOOL)a1;
- (void)_configureSymbolLayer;
- (void)_ensureRBLayer;
- (BOOL)_hasHDRContent;
- (double)_imageDynamicRangeHighEDRMaxHeadroom;
- (BOOL)_isSymbolAndRBLayerImageView;
- (void)_registerForForegroundStatusChangeNotificationsIfNecessary;
- (void)_teardownRBLayerIfNeeded;
- (void)_unregisterForForegroundStatusChangeNotificationsIfNecessary;
- (void)positionFromAlignmentRectFrame;
- (void)setSymbolImage:(id)a0 withContentTransition:(id)a1 options:(id)a2;
- (BOOL)wantsUpdateLayer;

@end
