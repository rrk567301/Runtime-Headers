@interface PXNSRoundedCornerOverlayView : PXNSShapeView

@property (nonatomic) double cornerRadius;

- (void)layout;
- (void)setPath:(id)a0;
- (void)_updatePath;

@end
