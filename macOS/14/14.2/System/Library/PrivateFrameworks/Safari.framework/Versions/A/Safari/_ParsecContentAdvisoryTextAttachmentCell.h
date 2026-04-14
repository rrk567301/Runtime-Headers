@class NSString, NSColor;

@interface _ParsecContentAdvisoryTextAttachmentCell : NSTextAttachmentCell

@property (readonly, copy, nonatomic) NSString *contentAdvisoryString;
@property (readonly, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (id)_labelAttributes;
- (struct CGSize { double x0; double x1; })cellSize;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initWithString:(id)a0 color:(id)a1;

@end
