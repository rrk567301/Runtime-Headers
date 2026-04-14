@class NSMutableArray, AXMLayoutHeader;

@interface AXMLayoutTable : AXMLayoutItem {
    AXMLayoutHeader *_header;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
}

+ (id)region:(id)a0 row:(id)a1;

- (id)header;
- (id)columns;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)addColumn:(id)a0;
- (id)rows;
- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (id)firstLine;
- (id)firstColumn;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
