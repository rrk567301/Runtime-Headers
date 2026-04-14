@interface ContentHuggingTextField : NSTextField

@property (nonatomic) BOOL useOriginalIntrinsicContentSize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;

@end
