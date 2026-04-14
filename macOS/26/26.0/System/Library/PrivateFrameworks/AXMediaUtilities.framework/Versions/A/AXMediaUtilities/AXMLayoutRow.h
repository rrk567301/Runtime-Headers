@class NSMutableArray;

@interface AXMLayoutRow : AXMLayoutItem {
    NSMutableArray *_cells;
}

+ (id)row:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)cells;
- (void).cxx_destruct;
- (void)addCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
