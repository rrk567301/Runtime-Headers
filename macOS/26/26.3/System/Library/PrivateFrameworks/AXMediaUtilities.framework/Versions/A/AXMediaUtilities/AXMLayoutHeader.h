@class NSMutableArray;

@interface AXMLayoutHeader : AXMLayoutItem {
    NSMutableArray *_cells;
}

+ (id)header:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)cells;
- (void)addCell:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
