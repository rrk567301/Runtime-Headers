@interface PDFAccessibilityNodeTableCell : PDFAccessibilityNode

@property (readonly, nonatomic) BOOL isHeader;

- (id)description;
- (id)accessibilityRole;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowIndexRange;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityColumnIndexRange;
- (void)buildAccessibilityHierarchy;
- (id)_textNodeFromNode:(id)a0;
- (id)_potentialTextContent;

@end
