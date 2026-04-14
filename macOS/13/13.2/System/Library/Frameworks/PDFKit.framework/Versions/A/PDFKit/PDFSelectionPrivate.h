@class NSMutableArray, NSUUID, PDFDocument, NSColor;

@interface PDFSelectionPrivate : NSObject {
    PDFDocument *document;
    NSColor *color;
    NSMutableArray *pageRanges;
    BOOL forceBreaks;
    struct __CFArray { } *cgSelections;
    NSMutableArray *pages;
    NSUUID *pdfSelectionUUID;
}

- (void).cxx_destruct;

@end
