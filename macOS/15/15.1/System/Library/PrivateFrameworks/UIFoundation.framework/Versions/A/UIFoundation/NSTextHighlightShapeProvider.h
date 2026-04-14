@class NSTextLayoutManager;

@interface NSTextHighlightShapeProvider : NSObject {
    NSTextLayoutManager *_textLayoutManager;
}

- (void).cxx_destruct;
- (unsigned long long)_modifyOptions:(unsigned long long)a0 forLineBoundariesInRange:(id)a1;
- (BOOL)enumerateHighlightPathsForRange:(id)a0 options:(unsigned long long)a1 usingBlock:(id /* block */)a2;
- (void)enumerateHighlightPathsForRanges:(id)a0 usingBlock:(id /* block */)a1;
- (id)initWithTextLayoutManager:(id)a0;
- (id)textSegmentRectsForRange:(id)a0;

@end
