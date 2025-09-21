@interface SOFlexibleScrollView : NSScrollView

@property (nonatomic) struct CGSize { double width; double height; } lastRecordedDocumentSize;
@property (nonatomic) BOOL hasHorizontalIntrinsicSize;
@property (nonatomic) BOOL hasVerticalIntrinsicSize;

+ (BOOL)requiresConstraintBasedLayout;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)reflectScrolledClipView:(id)a0;
- (void)setDocumentView:(id)a0;

@end
