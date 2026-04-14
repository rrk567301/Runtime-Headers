@class PDFAccessibilityNodeTablePrivate;

@interface PDFAccessibilityNodeTable : PDFAccessibilityNode {
    PDFAccessibilityNodeTablePrivate *_private3;
}

- (void).cxx_destruct;
- (unsigned long long)_columnCount;
- (id)accessibilityCellForColumn:(long long)a0 row:(long long)a1;
- (id)_cells;
- (id)_rows;
- (long long)accessibilityColumnCount;
- (id)accessibilityColumnHeaderUIElements;
- (id)accessibilityColumns;
- (id)accessibilityHeader;
- (id)accessibilityHelp;
- (id)accessibilityRole;
- (long long)accessibilityRowCount;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityRows;
- (id)accessibilitySelectedCells;
- (id)accessibilitySelectedRows;
- (id)accessibilityVisibleCells;
- (id)accessibilityVisibleColumns;
- (id)accessibilityVisibleRows;
- (id)_allColumns;
- (BOOL)_containsValidMarkup;
- (void)buildAccessibilityHierarchy;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;

@end
