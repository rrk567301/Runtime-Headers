@class NSImage;
@protocol NSContentStyle;

@interface _NSSimpleImageView : NSView {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _alignmentRectFrame;
}

@property (readonly, nonatomic) NSImage *image;
@property (readonly, copy, nonatomic) id<NSContentStyle> imageContentStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } alignmentRectFrame;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)positionFromAlignmentRectFrame;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;

@end
