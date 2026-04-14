@class NSMutableArray, AXMLayoutHeader;

@interface AXMLayoutTable : AXMLayoutItem {
    AXMLayoutHeader *_header;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
}

+ (id)region:(id)a0 row:(id)a1;

- (id)header;
- (id)columns;
- (id)rows;
- (void)addColumn:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)addRow:(id)a0;
- (id)firstLine;
- (id)firstColumn;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
