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
    char _languageSupportsLineBreakStyle;
    char _needsOptimalLayout;
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
@property char textContainerIsSimple;
@property double textContainerWidth;
@property (copy) NSParagraphStyle *defaultParagraphStyle;
@property char breaksLinesForInteractiveText;
@property unsigned long long maximumNumberOfLines;
@property struct _NSRange { unsigned long long location; unsigned long long length; } previousLineRange;
@property (copy) NSString *preferredLanguage;
@property (readonly) struct __CFStringTokenizer { } *tokenizer;
@property (readonly) char mayCompressLines;
@property (readonly) NSString *debugString;

+ (void)initialize;
+ (char)_hyphenatesAsLastResort;
+ (int)_languageCategoryForLanguageCode:(id)a0;
+ (int)_lineBreakStyleForFont:(id)a0;
+ (id)paragraphArbitratorWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)initWithAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (int)_lineBreakStyle;
- (char)_attributedStringOverridesLineBreakBeforeIndex:(id)a0;
- (void)_computeOptimalLayout;
- (struct { unsigned long long x0; unsigned long long x1; char x2; })_firstFitLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (char)_hyphenatesAsLastResort;
- (int)_lineBreakStyleForLastResortHyphenation:(char)a0;
- (struct { unsigned long long x0; unsigned long long x1; char x2; })_optimalLineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_preferredLanguageForCharacterAtIndex:(unsigned long long)a0;
- (char)_shouldUseCFStringTokenizerForLineBreaks;
- (char)_shouldUseOptimalLayout;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)a0;
- (void)configureOptimalLineBreaker;
- (struct { unsigned long long x0; unsigned long long x1; char x2; })lineBreakContextBeforeIndex:(unsigned long long)a0 lineFragmentWidth:(double)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)optimalLineBreaker;
- (char)prepareBreakIteratorForCharacterAtIndex:(unsigned long long)a0;
- (char)prepareTokenizerForPreferredLanguage:(id)a0;
- (double)raggednessWithCharIndexAsLineBreak:(unsigned long long)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)resetBreaker;

@end
