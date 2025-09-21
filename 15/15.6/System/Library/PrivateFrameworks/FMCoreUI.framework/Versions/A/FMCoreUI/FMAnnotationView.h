@class CALayer, NSColor, CAShapeLayer;
@protocol FMAnnotation, MKAnnotation;

@interface FMAnnotationView : MKAnnotationView

@property (retain, nonatomic) CAShapeLayer *smallRingLayer;
@property (retain, nonatomic) CAShapeLayer *largeRingLayer;
@property (retain, nonatomic) CALayer *smallCircleLayer;
@property (retain, nonatomic) CALayer *largeCircleLayer;
@property (retain, nonatomic) CALayer *locationOuterLayer;
@property (retain, nonatomic) CALayer *locationInnerLayer;
@property (retain, nonatomic) CALayer *smallPersonImageLayer;
@property (retain, nonatomic) CALayer *largePersonImageLayer;
@property (nonatomic) char isShowingLargeSelectedAnnotation;
@property (nonatomic) char hasPhotoImage;
@property (retain, nonatomic) NSColor *tintColor;
@property (retain, nonatomic) id<FMAnnotation, MKAnnotation> annotation;
@property (nonatomic) char shouldPreventLargeAnnotationState;
@property (nonatomic) char isDelayed;

+ (char)_followsTerrain;
+ (void)setImagePadding:(double)a0;
+ (void)preloadAssets;
+ (void)setLargeAnnotationBorderVisible:(char)a0;
+ (void)setShouldMaskLayer:(char)a0;
+ (void)setThickAnnotationBorder:(char)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setAnnotation:(id)a0;
- (void)updateLayer;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1;
- (void)setSelected:(char)a0 animated:(char)a1;
- (void)_selectionWasUpdated:(char)a0;
- (void)_setupSpringActions;
- (void)_transitionToNewSize:(char)a0;
- (void)_updateAnnotationStyle;
- (void)animateDelayedAnimation;
- (id)initWithAnnotation:(id)a0 reuseIdentifier:(id)a1 tintColor:(id)a2;
- (void)invertColorStatusDidChange:(id)a0;
- (void)setSelected:(char)a0 animated:(char)a1 delay:(double)a2;
- (void)updateStyleForAnnotation:(id)a0;

@end
