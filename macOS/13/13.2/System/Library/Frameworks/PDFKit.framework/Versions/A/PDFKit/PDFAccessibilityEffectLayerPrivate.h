@class PDFPage, NSMutableArray;

@interface PDFAccessibilityEffectLayerPrivate : NSObject {
    PDFPage *page;
    long long displayBox;
    NSMutableArray *nodeTypeLayers;
}

- (void).cxx_destruct;

@end
