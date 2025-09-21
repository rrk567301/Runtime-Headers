@class NSFont;

@interface WFSlotTemplateImageAttachment : NSTextAttachment

@property (nonatomic) double imageScaleFactor;
@property (retain, nonatomic) NSFont *fontForAlignment;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 ofType:(id)a1;

@end
