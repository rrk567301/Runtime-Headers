@class PDFAccessibilityNodePagePrivate;

@interface PDFAccessibilityNodePage : PDFAccessibilityNode {
    PDFAccessibilityNodePagePrivate *_private3;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)accessibilityParent;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleDescription;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (id)page;
- (id)_document;
- (unsigned long long)pageNumber;
- (id)_documentView;
- (id)_pageView;
- (id)pageContentRootNode;
- (struct CGPDFLayout { } *)_pageLayout;
- (unsigned long long)_documentIndex;
- (void)scrollToVisible;
- (id)initWithParent:(id)a0 pageNumber:(unsigned long long)a1;
- (id)resultNodeForSearchString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchOption:(unsigned long long)a2 resultRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (void)annotationAdded:(id)a0;
- (void)annotationRemoved:(id)a0;

@end
