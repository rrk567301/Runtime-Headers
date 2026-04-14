@class NSLayoutManager, NSArray, NSParagraphStyle, NSTextContainer, NSAttributedString;

@interface NSATSTypesetter : NSTypesetter {
    NSAttributedString *attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } paragraphGlyphRange;
    struct _NSRange { unsigned long long location; unsigned long long length; } paragraphSeparatorGlyphRange;
    double lineFragmentPadding;
    NSLayoutManager *layoutManager;
    NSArray *textContainers;
    NSTextContainer *currentTextContainer;
    unsigned long long currentTextContainerIndex;
    struct CGSize { double width; double height; } currentTextContainerSize;
    NSParagraphStyle *currentParagraphStyle;
    void *_atsReserved[8];
    id _private;
}

@property (class, readonly) NSATSTypesetter *sharedTypesetter;

+ (void)initialize;
+ (id)sharedInstance;
+ (BOOL)_allowsScreenFontKerning;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forLayoutManager:(id)a1 maximumNumberOfLineFragments:(unsigned long long)a2;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)a0;
- (void)endParagraph;
- (double)baselineOffsetInLayoutManager:(id)a0 glyphIndex:(unsigned long long)a1;
- (void)beginParagraph;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_allocateAuxData;
- (union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *)_lineFragmentRectForProposedRectArgs;
- (void)setLimitsLayoutForSuspiciousContents:(BOOL)a0;
- (BOOL)limitsLayoutForSuspiciousContents;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)a0;
- (void)layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 nextGlyphIndex:(unsigned long long *)a3;
- (long long)_baseWritingDirection;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)a0;
- (void)_flushCachedObjects;
- (BOOL)_isBusy;
- (BOOL)_forceWordWrapping;
- (BOOL)_baselineRenderingMode;
- (const char *)_bidiLevels;
- (id)_textContainerForAttachmentProtocol;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)a0 characterIndex:(unsigned long long *)a1 atPoint:(struct CGPoint { double x0; double x1; } *)a2 renderingContext:(id *)a3;
- (void)setDefaultTighteningFactor:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)setLineBreakStrategy:(unsigned long long)a0;
- (BOOL)_usesScreenFonts;
- (id)_getATSTypesetterGuts;
- (struct __CTTypesetter { } *)_ctTypesetter;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForControlGlyphAtIndex:(unsigned long long)a0 forTextContainer:(id)a1 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 glyphPosition:(struct CGPoint { double x0; double x1; })a3 characterIndex:(unsigned long long)a4;
- (id)_textStorageForAttachmentProtocol;
- (BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)a0;
- (void)_setForceWordWrapping:(BOOL)a0;
- (void)_doBidiProcessing;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a0;
- (id)init;
- (void)_setBusy:(BOOL)a0;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)a0;
- (id)paragraphArbitrator;
- (unsigned long long)lineBreakStrategy;
- (void)_setBaselineRenderingMode:(BOOL)a0;
- (BOOL)_mirrorsTextAlignment;
- (BOOL)synchronizesAlignmentToDirection;
- (double)defaultTighteningFactor;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)a0;
- (void)dealloc;

@end
