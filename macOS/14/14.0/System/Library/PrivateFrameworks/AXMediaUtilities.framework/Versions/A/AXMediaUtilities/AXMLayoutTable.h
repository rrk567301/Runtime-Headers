@class NSMutableArray, AXMLayoutHeader;

@interface AXMLayoutTable : AXMLayoutItem {
    AXMLayoutHeader *_header;
    NSMutableArray *_rows;
    NSMutableArray *_columns;
}

+ (id)region:(id)a0 row:(id)a1;

- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (id)firstLine;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)rows;
- (id)header;
- (id)columns;
- (id)firstColumn;
- (void)addColumn:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;

@end
