@class NSArray, NSString, PDFSelectionPrivate, NSAttributedString, NSColor;

@interface PDFSelection : NSObject <NSCopying> {
    PDFSelectionPrivate *_private;
}

@property (readonly, nonatomic) NSArray *pages;
@property (copy, nonatomic) NSColor *color;
@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSAttributedString *attributedString;

+ (id)defaultActiveColor;
+ (id)defaultInactiveColor;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)document;
- (id)initWithDocument:(id)a0;
- (id)webArchive;
- (void)normalize;
- (id)firstPage;
- (id)lastPage;
- (id)html;
- (void)extendSelectionAtEnd:(long long)a0;
- (void)extendSelectionAtStart:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundsForPage:(id)a0;
- (id)initWithPage:(id)a0;
- (void)addSelection:(id)a0;
- (BOOL)forceBreaks;
- (const struct __CFArray { } *)cgSelections;
- (id)pdfSelectionUUID;
- (BOOL)containsPoint:(struct CGPoint { double x0; double x1; })a0 onPage:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })spanBoundsForPage:(id)a0 atPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })firstSpanBoundsForPage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lastSpanBoundsForPage:(id)a0;
- (unsigned long long)numberOfTextRangesOnPage:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeAtIndex:(unsigned long long)a0 onPage:(id)a1;
- (id)selectionsByLine;
- (void)addSelections:(id)a0;
- (void)extendSelectionForLineBoundaries;
- (void)drawForPage:(id)a0 active:(BOOL)a1;
- (void)drawForPage:(id)a0 withBox:(long long)a1 active:(BOOL)a2;
- (id)asDestination;
- (id)boundsArrayForPage:(id)a0;
- (void)addCGSelection:(struct CGPDFSelection { } *)a0 forPage:(id)a1;
- (id)cgSelectionPages;
- (struct CGPDFSelection { } *)cgSelectionForPage:(id)a0;
- (void)addSelectionNoNormalize:(id)a0;
- (void)addSelectionCore:(id)a0 normalize:(BOOL)a1;
- (void)addSelectionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 page:(id)a1 normalize:(BOOL)a2;
- (struct CGPoint { double x0; double x1; })firstCharCenter;
- (struct CGPoint { double x0; double x1; })leftMostCharCenter;
- (struct CGPoint { double x0; double x1; })rightMostCharCenter;
- (unsigned long long)indexOfFirstCharacterOnPage:(id)a0;
- (unsigned long long)indexOfLastCharacterOnPage:(id)a0;
- (unsigned long long)pdfKitIndexOfFirstCharacterOnPage:(id)a0;
- (unsigned long long)pdfKitIndexOfLastCharacterOnPage:(id)a0;
- (id)createAttributedStringForCGSelection:(struct CGPDFSelection { } *)a0 scaled:(double)a1;
- (id)attributedStringScaled:(double)a0;
- (id)rtfdData;
- (void)addRichTypesToPasteboard:(id)a0;
- (void)addRTFDToPasteboard:(id)a0;
- (void)setForceBreaks:(BOOL)a0;
- (void)drawForPage:(id)a0 withBox:(int)a1 active:(BOOL)a2 inContext:(struct CGContext { } *)a3;
- (BOOL)isStandaloneGraphic;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })previewRangeAtIndex:(unsigned long long)a0 onPage:(id)a1;

@end
