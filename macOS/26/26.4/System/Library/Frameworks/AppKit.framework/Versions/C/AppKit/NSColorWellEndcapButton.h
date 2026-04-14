@interface NSColorWellEndcapButton : NSButton

@property BOOL hasCustomImage;

+ (Class)cellClass;

- (void)updateLayer;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)sizeToFit;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)shouldBeArchived;

@end
