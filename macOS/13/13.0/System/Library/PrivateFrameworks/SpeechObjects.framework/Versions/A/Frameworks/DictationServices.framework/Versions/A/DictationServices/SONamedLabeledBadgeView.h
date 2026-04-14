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
- (id)initWithName:(id)a0 elementFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 containerBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (BOOL)collidesWithView:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_collisionFrameForArrow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_elementFrameAdjustedForBounds;
- (void)_updateLabelContainerSize;
- (BOOL)_shouldAllowLongArrows;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validateLabelContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateFromMainProperties;
- (double)_outlineWidth;
- (void)_updateFromLabelContainerFrame;
- (BOOL)_arrowPointsDown;
- (BOOL)_usesArrow;
- (BOOL)_usesExtendedArrow;
- (id)_newBackgroundImage;

@end
