@class NSString, NSArray, NSAttributedString;
@protocol AMPLanguageAwareStringPreprocessor;

@interface AMPLanguageAwareString : NSObject <AMPWritingDirectionContentProtocol> {
    void /* unknown type, empty encoding */ baseAttributedString;
    void /* unknown type, empty encoding */ $__lazy_storage_$_attributedString;
    void /* unknown type, empty encoding */ cachedTextStorage;
    void /* unknown type, empty encoding */ cachedTextContentStorage;
    void /* unknown type, empty encoding */ knownBaseWritingDirections;
    void /* function */ string;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localizedLowercase;
    void /* unknown type, empty encoding */ $__lazy_storage_$_localizedUppercase;
    void /* unknown type, empty encoding */ $__lazy_storage_$_newlinesCollapsedToSpace;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trimmed;
    void /* function */ numbers;
    void /* function */ paragraphs;
    void /* function */ words;
    void /* unknown type, empty encoding */ $__lazy_storage_$_fullRange;
    void /* unknown type, empty encoding */ $__lazy_storage_$_isEmpty;
    void /* unknown type, empty encoding */ $__lazy_storage_$_utf16Count;
    void /* unknown type, empty encoding */ $__lazy_storage_$_utf32Count;
    void /* unknown type, empty encoding */ $__lazy_storage_$_characterCount;
    void /* unknown type, empty encoding */ $__lazy_storage_$_thresholdBaseWritingDirection;
}

@property (class, nonatomic) BOOL alwaysGenerateAttributedString;
@property (class, nonatomic) BOOL keepStatisticsOnLanguageComponents;
@property (class, nonatomic, retain) id<AMPLanguageAwareStringPreprocessor> delegate;
@property (class, nonatomic, readonly) AMPLanguageAwareString *AMPLanguageAwareStringEmpty;

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, retain) AMPLanguageAwareString *localizedLowercase;
@property (nonatomic, retain) AMPLanguageAwareString *localizedUppercase;
@property (nonatomic, retain) AMPLanguageAwareString *newlinesCollapsedToSpace;
@property (nonatomic, retain) AMPLanguageAwareString *trimmed;
@property (nonatomic, readonly) NSArray *numbers;
@property (nonatomic, readonly) NSArray *paragraphs;
@property (nonatomic, readonly) NSArray *words;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } fullRange;
@property (nonatomic) BOOL isEmpty;
@property (nonatomic) long long length;
@property (nonatomic) long long utf32Length;
@property (nonatomic) long long numberOfCharacters;
@property (nonatomic) long long thresholdBaseWritingDirection;

- (id)init;
- (void).cxx_destruct;
- (id)writingDirectionsQuantities;
- (long long)baseWritingDirectionForCharacterAtLocation:(long long)a0;
- (id)initWithAttributedString:(id)a0 baseParagraphStyle:(id)a1 keepStatisticsOnLanguageComponents:(BOOL)a2;
- (id)initWithLanguageAwareString:(id)a0 attributes:(id)a1 keepStatisticsOnLanguageComponents:(BOOL)a2;
- (id)initWithString:(id)a0 attributes:(id)a1 baseParagraphStyle:(id)a2 keepStatisticsOnLanguageComponents:(BOOL)a3;
- (id)initWithString:(id)a0 baseParagraphStyle:(id)a1 generateAttributedString:(BOOL)a2 keepStatisticsOnLanguageComponents:(BOOL)a3;
- (long long)writingDirectionOfLine:(long long)a0 maximumLinesShown:(long long)a1 withWidth:(double)a2 lineBreakMode:(unsigned long long)a3 cacheLayoutInfo:(BOOL)a4;
- (long long)writingDirectionOfLine:(long long)a0 maximumLinesShown:(long long)a1 withWidth:(double)a2 lineBreakMode:(unsigned long long)a3 cacheLayoutInfo:(BOOL)a4 lineNumberReported:(long long *)a5;

@end
