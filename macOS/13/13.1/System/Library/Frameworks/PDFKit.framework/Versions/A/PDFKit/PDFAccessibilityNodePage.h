@class PDFAccessibilityNodePagePrivate;

@interface PDFAccessibilityNodePage : PDFAccessibilityNode {
    PDFAccessibilityNodePagePrivate *_private3;
}

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (id)_document;
- (id)page;
- (unsigned long long)pageNumber;
- (id)_documentView;
- (id)_pageView;
- (id)pageContentRootNode;
- (id)initWithParent:(id)a0 pageNumber:(unsigned long long)a1;
- (void)scrollToVisible;
- (id)resultNodeForSearchString:(id)a0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 searchOption:(unsigned long long)a2 resultRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3;
- (struct CGPDFLayout { } *)_pageLayout;
- (void)annotationAdded:(id)a0;
- (void)annotationRemoved:(id)a0;
- (unsigned long long)_documentIndex;

@end
