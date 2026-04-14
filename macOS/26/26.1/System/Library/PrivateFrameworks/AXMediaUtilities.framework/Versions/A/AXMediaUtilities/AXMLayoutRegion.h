@class NSMutableArray;

@interface AXMLayoutRegion : AXMLayoutItem {
    NSMutableArray *_lines;
}

+ (id)region:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void).cxx_destruct;
- (id)lines;
- (void)addLine:(id)a0;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
