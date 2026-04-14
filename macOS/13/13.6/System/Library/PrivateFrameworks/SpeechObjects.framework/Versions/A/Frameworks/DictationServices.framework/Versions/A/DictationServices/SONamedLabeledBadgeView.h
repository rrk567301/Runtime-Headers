@class NSString, NSTextView, NSImageView;

@interface SONamedLabeledBadgeView : NSVisualEffectView {
    NSTextView *_label;
    NSImageView *_badgeMaskView;
}

@property (nonatomic) struct CGSize { double width; double height; } labelContainerSize;
@property (nonatomic) struct CGPoint { double x; double y; } arrowTipLocation;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } elementFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerBounds;
@property (nonatomic) long long labelPosition;
@property (readonly, nonatomic) BOOL hasExtendedArrow;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelContainerFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } totalContainerFrame;
@property (nonatomic) struct CGSize { double width; double height; } forcedLabelContainerSize;

- (void)layout;
- (double)_cornerRadius;
- (double)_arrowHeight;
- (BOOL)_arrowPointsDown;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_collisionFrameForArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementFrameAdjustedForBounds;
- (id)_newBackgroundImage;
- (double)_outlineWidth;
- (BOOL)_shouldAllowLongArrows;
- (void)_updateFromLabelContainerFrame;
- (void)_updateFromMainProperties;
- (void)_updateLabelContainerSize;
- (BOOL)_usesArrow;
- (BOOL)_usesExtendedArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validateLabelContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)collidesWithView:(id)a0;
- (id)initWithName:(id)a0 elementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
