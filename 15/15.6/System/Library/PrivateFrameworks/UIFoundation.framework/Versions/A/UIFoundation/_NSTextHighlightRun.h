@class NSTextRange, NSMutableArray, _NSTextHighlightCluster;

@interface _NSTextHighlightRun : NSObject {
    NSMutableArray *_drawnSegmentCGPaths;
    unsigned long long _runIndex;
    unsigned long long _lineBoundaryOptions;
    char _leadingRun;
    char _trailingRun;
    _NSTextHighlightCluster *_cluster;
    NSTextRange *_textRange;
    NSMutableArray *_segments;
    double _cornerRadius;
    double _cornerOutset;
}

- (id)description;
- (void).cxx_destruct;
- (void)enumerateRunSegmentsUsingBlock:(id /* block */)a0;
- (struct CGPath { } *)_createUnionedPathFromArray:(id)a0;
- (char)beginsOnSameLineAsPreviousRun;
- (char)isFirstRun;
- (char)isLastRun;
- (char)isSegmentFrameRenderable:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forIndex:(unsigned long long)a1;
- (char)textRangeIsInSameLine:(id)a0;

@end
