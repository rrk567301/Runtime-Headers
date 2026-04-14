@class CPRMTable, NSString;

@interface CPRMTableCell : NSObject {
    NSString *_contents;
}

@property (readonly) struct CGPDFPage { } *page;
@property (retain) CPRMTableCell *nextCellInColumn;
@property (retain) CPRMTableCell *nextCellInRow;
@property CPRMTable *table;
@property struct CGPDFNode { } *tableCellNode;

- (void)dealloc;
- (id)contents;
- (unsigned long long)column;
- (unsigned long long)row;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGColor { } *)backgroundColor;
- (struct CGPDFPage { } *)page;

@end
