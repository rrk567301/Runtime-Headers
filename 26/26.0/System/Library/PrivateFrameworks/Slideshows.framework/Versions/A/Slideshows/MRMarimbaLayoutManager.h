@class MPText, MRMarimbaView, MRMarimbaLayer, MRTextRenderer;

@interface MRMarimbaLayoutManager : NSLayoutManager {
    MRTextRenderer *_textRenderer;
}

@property (retain, nonatomic) MRMarimbaView *marimbaView;
@property (retain, nonatomic) MRMarimbaLayer *marimbaLayer;
@property (retain, nonatomic) MPText *text;

- (struct CGPoint { double x0; double x1; })shadowOffset;
- (void)dealloc;
- (id)init;
- (void)updateWithString:(id)a0;
- (long long)lineCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extraLineFragmentRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extraLineFragmentUsedRect;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)a0;
- (id)_renderer;
- (id)textRenderer;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentRectForEditedText;

@end
