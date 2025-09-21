@class _NSOptimalLineBreaker, NSString, NSAttributedString, NSParagraphStyle;

@interface NSParagraphArbitrator : NSObject {
    NSAttributedString *_attributedString;
    struct _NSRange { unsigned long long location; unsigned long long length; } _paragraphRange;
    struct __CTLine { } *_paragraphLine;
    double _textContainerWidth;
    struct UBreakIterator { } *_breaker;
    NSString *_breakerString;
    NSString *_breakerLanguage;
    unsigned long long _usesOptimalLayout;
    int _lineBreakStyle;
    BOOL _languageSupportsLineBreakStyle;
    BOOL _needsOptimalLayout;
    _NSOptimalLineBreaker *_optimalLineBreaker;
    NSParagraphStyle *_defaultParagraphStyle;
}

@property (retain) NSAttributedString *attributedString;
@property struct _NSRange { unsigned long long x0; unsigned long long x1; } paragraphRange;
@property struct __CTLine { } *paragraphLine;
@property (copy) id /* block */ lineWidth;
@property (copy) id /* block */ validateLineBreakContext;
@property unsigned long long lineBreakStrategy;
@property double hyphenationFactor;
@property long long typesetterBehavior;
@property BOOL textContainerIsSimple;
@property double textContainerWidth;
@property (copy) NSParagraphStyle *defaultParagraphStyle;
@property BOOL breaksLinesForInteractiveText;
@property unsigned long long maximumNumberOfLines;
@property struct _NSRange { unsigned long long location; unsigned long long length; } previousLineRange;
@property (copy) NSString *preferredLanguage;
@property (readonly) struct __CFStringTokenizer { } *tokenizer;
@property (readonly) BOOL mayCompressLines;
@property (readonly) NSString *debugString;

+ (int)_lineBreakStyleForFont:(id)a0;
+ (BOOL)_hyphenatesAsLastResort;
+ (id)paragraphArbitratorWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
+ (void)initialize;
+ (int)_languageCategoryForLanguageCode:(id)a0;

- (BOOL)_attributedStringOverridesLineBreakBeforeIndex:(id)a0;
- (int)_lineBreakStyleForLastResortHyphenation:(BOOL)a0;
- (void)reset;
- (void)dealloc;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })lineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (void)resetBreaker;
- (void)_computeOptimalLayout;
- (BOOL)_hyphenatesAsLastResort;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_optimalLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)prepareTokenizerForPreferredLanguage:(id)a0;
- (id)_preferredLanguageForCharacterAtIndex:(unsigned long long)a0;
- (BOOL)prepareBreakIteratorForCharacterAtIndex:(unsigned long long)a0;
- (id)init;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)a0;
- (BOOL)_shouldUseCFStringTokenizerForLineBreaks;
- (BOOL)_shouldUseOptimalLayout;
- (void)configureOptimalLineBreaker;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (double)raggednessWithCharIndexAsLineBreak:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)optimalLineBreaker;
- (struct { unsigned long long x0; unsigned long long x1; BOOL x2; })_firstFitLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (int)_lineBreakStyle;

@end
