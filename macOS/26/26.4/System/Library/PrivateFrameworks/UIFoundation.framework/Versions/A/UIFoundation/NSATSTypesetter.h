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

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)_allowsScreenFontKerning;

- (void)setLimitsLayoutForSuspiciousContents:(BOOL)a0;
- (void)layoutGlyphsInLayoutManager:(id)a0 startingAtGlyphIndex:(unsigned long long)a1 maxNumberOfLineFragments:(unsigned long long)a2 nextGlyphIndex:(unsigned long long *)a3;
- (struct { struct *x0; struct _NSRange { unsigned long long x0; unsigned long long x1; } x1; struct _NSRange { unsigned long long x0; unsigned long long x1; } x2; float x3; float x4; void /* function */ *x5; void /* function */ *x6; double x7; double x8; double x9; double x10; double x11; double x12; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x13; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x14; struct _NSRange { unsigned long long x0; unsigned long long x1; } x15; id x16; double x17; long long x18; struct { unsigned char x0 : 4; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 4; unsigned char x5 : 4; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 2; unsigned char x11 : 1; unsigned char x12 : 3; unsigned char x13 : 7; } x19; void *x20[0]; } *)_allocateAuxData;
- (void)beginParagraph;
- (BOOL)limitsLayoutForSuspiciousContents;
- (unsigned long long)actionForControlCharacterAtIndex:(unsigned long long)a0;
- (void)beginLineWithGlyphAtIndex:(unsigned long long)a0;
- (void)endLineWithGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (long long)_baseWritingDirection;
- (union { struct { double x0; double x1; double x2; long long x3; } x0; struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; } x1; } *)_lineFragmentRectForProposedRectArgs;
- (void)endParagraph;
- (unsigned long long)layoutParagraphAtPoint:(struct CGPoint { double x0; double x1; } *)a0;
- (double)baselineOffsetInLayoutManager:(id)a0 glyphIndex:(unsigned long long)a1;
- (BOOL)_usesScreenFonts;
- (void)_setBusy:(BOOL)a0;
- (BOOL)_mirrorsTextAlignment;
- (BOOL)synchronizesAlignmentToDirection;
- (void)_setForceWordWrapping:(BOOL)a0;
- (double)defaultTighteningFactor;
- (id)paragraphArbitrator;
- (id)_getATSTypesetterGuts;
- (void)_flushCachedObjects;
- (struct __CTTypesetter { } *)_ctTypesetter;
- (unsigned long long)_sweepDirectionForGlyphAtIndex:(long long)a0;
- (BOOL)_isBusy;
- (BOOL)_baselineRenderingMode;
- (id)_textStorageForAttachmentProtocol;
- (id)_textContainerForAttachmentProtocol;
- (BOOL)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)a0;
- (BOOL)_forceWordWrapping;
- (const char *)_bidiLevels;
- (BOOL)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)a0;
- (unsigned long long)lineBreakStrategy;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })boundingBoxForControlGlyphAtIndex:(unsigned long long)a0 forTextContainer:(id)a1 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 glyphPosition:(struct CGPoint { double x0; double x1; })a3 characterIndex:(unsigned long long)a4;
- (void)setLineBreakStrategy:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 remainingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)init;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })layoutCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forLayoutManager:(id)a1 maximumNumberOfLineFragments:(unsigned long long)a2;
- (void)_setBaselineRenderingMode:(BOOL)a0;
- (unsigned int)hyphenCharacterForGlyphAtIndex:(unsigned long long)a0;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned long long)a0;
- (void)_doBidiProcessing;
- (void)dealloc;
- (BOOL)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned long long *)a0 characterIndex:(unsigned long long *)a1 atPoint:(struct CGPoint { double x0; double x1; } *)a2 renderingContext:(id *)a3;
- (void)setDefaultTighteningFactor:(double)a0;

@end
