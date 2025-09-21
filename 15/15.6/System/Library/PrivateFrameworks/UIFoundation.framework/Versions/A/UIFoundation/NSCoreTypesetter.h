@class NSDictionary, NSMutableArray, NSArray;
@protocol NSCoreTypesetterDelegateInternal, NSTextAnimationKeyframe, NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter {
    double _lineFragmentOriginYOffset;
    id<NSCoreTypesetterDelegateInternal> _delegate;
    char _delegateSupportsTextContainer;
    char _delegatesSupportsTruncationToken;
}

@property (class, readonly) char _allowsFontOverridingTextAttachmentVerticalMetricsForStringDrawing;

@property (copy) NSDictionary *_extraLineFragmentAttributes;
@property long long layoutOrientation;
@property char allowsFontOverridingTextAttachmentVerticalMetrics;
@property char requiresCTLineRef;
@property (readonly) NSMutableArray *truncatedRanges;
@property struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property struct CGSize { double width; double height; } textContainerSize;
@property long long maximumNumberOfLines;
@property unsigned long long containerBreakMode;
@property char enforcesMinimumTextLineFragment;
@property char wantsExtraLineFragment;
@property (copy) id /* block */ laidOutLineFragment;
@property (weak) id<NSCoreTypesetterDelegate> delegate;
@property char usesDefaultHyphenation;
@property char allowsFontSubstitutionAffectingVerticalMetrics;
@property char limitsLayoutForSuspiciousContents;
@property (getter=isBeginningOfDocument) char beginningOfDocument;
@property char typographicBoundsIncludesLineFragmentPadding;
@property char breaksLinesForInteractiveText;
@property (copy) id /* block */ validateLineBreakIndex;
@property (retain) id<NSTextAnimationKeyframe> keyframe;
@property (copy) NSArray *forcedLineBreaks;

+ (void)_lineMetricsForAttributes:(id)a0 typesetterBehavior:(long long)a1 usesFontLeading:(BOOL)a2 applySpacings:(BOOL)a3 usesSystemFontLeading:(BOOL)a4 usesNegativeFontLeading:(BOOL)a5 layoutOrientation:(long long)a6 lineHeight:(double *)a7 baselineOffset:(double *)a8 spacing:(double *)a9;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray { } *)a0 ascender:(double *)a1 descender:(double *)a2;
+ (void)_minMaxPositionsForLineFragmentWithParagraphStyle:(id)a0 baseWidth:(double)a1 writingDirection:(long long)a2 isBeginningOfParagraph:(char)a3 minPosition:(double *)a4 maxPosition:(double *)a5;

- (void)dealloc;
- (id)init;
- (id)delegate;
- (void)setDelegate:(id)a0;
- (void)layout;
- (void)endLine;
- (int)_NSFastDrawString:(id)a0 length:(unsigned long long)a1 attributes:(id)a2 paragraphStyle:(id)a3 typesetterBehavior:(long long)a4 lineBreakMode:(unsigned long long)a5 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 padding:(double)a7 graphicsContext:(id)a8 baselineRendering:(char)a9 usesFontLeading:(char)a10 usesScreenFont:(char)a11 scrollable:(char)a12 syncAlignment:(char)a13 mirrored:(char)a14 boundingRectPointer:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a15 baselineOffsetPointer:(double *)a16 drawingContext:(id)a17;
- (struct __CTLine { } *)_createLayoutLineFragmentStartingWithCharacterIndex:(inout long long *)a0 proposedLineFragmentRect:(inout struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 baseLineRef:(inout const struct __CTLine **)a2 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 paragraphStyle:(id)a4 paragraphArbitrator:(id)a5 lineBreakMode:(unsigned long long)a6 hasAttachments:(char)a7 lineFragmentRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a8 glyphOrigin:(out struct CGPoint { double x0; double x1; } *)a9 hyphenated:(out char *)a10 forcedClusterBreak:(out char *)a11;
- (struct __CTLine { } *)_createLineRefForParentLineRef:(inout const struct __CTLine **)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 availableWidth:(double)a2 offset:(double)a3 paragraphArbitrator:(id)a4 lineBreakMode:(unsigned long long)a5 hyphenated:(out char *)a6 forcedClusterBreak:(out char *)a7;
- (struct { unsigned long long x0; unsigned long long x1; char x2; })_forcedLineBreakAfterIndex:(unsigned long long)a0;
- (long long)_getFirstOverflowTabStopIndexInLineRef:(struct __CTLine { } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 paragraphStyle:(id)a3 availableWidth:(double)a4 offset:(double)a5;
- (struct { double x0; double x1; double x2; })_getLineMetricsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 attributes:(id)a1 attributedString:(id)a2 applySpacing:(char)a3 usesSystemFontLeading:(char)a4 usesNegativeFontLeading:(char)a5;
- (id)_paragraphStyleFromAttributes:(id)a0;
- (char)_shouldShowLineBadges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_stringDrawingCoreTextEngineWithOriginalString:(id)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 padding:(double)a2 graphicsContext:(id)a3 forceClipping:(BOOL)a4 attributes:(id)a5 stringDrawingOptions:(long long)a6 drawingContext:(id)a7 stringDrawingInterface:(struct { unsigned char x0; long long x1; char x2; char x3; } *)a8;
- (id)_truncationTokenForRange:(inout struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0 attributes:(id)a1 originalLineRef:(struct __CTLine { } *)a2;
- (struct __CTRun { } *)_truncationTokenRunRefWithContext:(struct { id x0; id x1; struct __CTRun *x2; } *)a0 token:(id)a1 attributes:(id)a2;
- (void)beginLine;
- (char)isSimpleRectangularTextContainerForStartingCharacterAtIndex:(long long)a0;
- (void)layoutWithYOrigin:(double)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })lineFragmentRectForProposedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 atIndex:(long long)a1 writingDirection:(long long)a2 remainingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a3;
- (id)softHyphen;

@end
