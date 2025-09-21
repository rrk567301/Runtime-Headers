@interface SOFlexibleScrollView : NSScrollView

@property (nonatomic) struct CGSize { double width; double height; } lastRecordedDocumentSize;
@property (nonatomic) char hasHorizontalIntrinsicSize;
@property (nonatomic) char hasVerticalIntrinsicSize;

+ (char)requiresConstraintBasedLayout;

- (char)accessibilityIsAttributeSettable:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reflectScrolledClipView:(id)a0;
- (void)setDocumentView:(id)a0;

@end
