@interface NSColorWellEndcapButton : NSButton

@property BOOL hasCustomImage;

+ (Class)cellClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)updateLayer;
- (void)sizeToFit;
- (BOOL)shouldBeArchived;

@end
