@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {
    NSMutableArray *_lines;
}

+ (id)region:(id)a0;

- (void).cxx_destruct;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)addLine:(id)a0;
- (id)lines;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
