@class PDFAccessibilityNodeTablePrivate;

@interface PDFAccessibilityNodeTable : PDFAccessibilityNode {
    PDFAccessibilityNodeTablePrivate *_private3;
}

- (void).cxx_destruct;
- (unsigned long long)_columnCount;
- (id)accessibilityRole;
- (long long)accessibilityRowCount;
- (long long)accessibilityColumnCount;
- (id)accessibilitySelectedCells;
- (id)accessibilityCellForColumn:(long long)a0 row:(long long)a1;
- (id)accessibilityHelp;
- (id)accessibilityHeader;
- (id)accessibilityColumns;
- (id)accessibilityRows;
- (id)accessibilityVisibleRows;
- (id)accessibilitySelectedRows;
- (id)accessibilityVisibleColumns;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityVisibleCells;
- (id)accessibilityColumnHeaderUIElements;
- (id)_rows;
- (id)_cells;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (void)buildAccessibilityHierarchy;
- (id)_allColumns;
- (BOOL)_containsValidMarkup;

@end
