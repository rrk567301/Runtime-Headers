@class PDFAccessibilityNode;

@interface PDFAccessibilityNodePagePrivate : NSObject {
    PDFAccessibilityNode *pageContentRootNode;
    unsigned long long pageNumber;
    PDFAccessibilityNode *signatureWidgetForVOFocus;
}

- (void).cxx_destruct;

@end
