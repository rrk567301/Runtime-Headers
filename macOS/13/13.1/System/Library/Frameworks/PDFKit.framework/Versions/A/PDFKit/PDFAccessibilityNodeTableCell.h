@interface PDFAccessibilityNodeTableCell : PDFAccessibilityNode {
    struct _NSRange { unsigned long long location; unsigned long long length; } _columnIndexRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rowIndexRange;
}

@property (readonly, nonatomic) BOOL isHeader;

- (id)description;
- (id)accessibilityRole;
- (id)accessibilityRowHeaderUIElements;
- (id)accessibilityColumnHeaderUIElements;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowIndexRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnIndexRange;
- (BOOL)isValidAccessibilityElement;
- (id)initWithParent:(id)a0 nodeRef:(struct CGPDFTaggedNode { } *)a1;
- (id)initWithParent:(id)a0 columnIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 rowIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_potentialTextContent;
- (id)_textNodeFromNode:(id)a0;

@end
