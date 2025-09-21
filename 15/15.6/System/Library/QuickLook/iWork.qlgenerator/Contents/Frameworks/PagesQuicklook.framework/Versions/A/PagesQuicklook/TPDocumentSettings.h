@class NSString;

@interface TPDocumentSettings : TSPObject {
    char _hasBody;
    char _hasHeaders;
    char _hasFooters;
    char _hasFacingPages;
    char _qlPreview;
    char _copyMovies;
    char _copyAssets;
    char _placeholderAuthoring;
    char _sectionAuthoring;
    char _linksEnabled;
    char _hyphenation;
    char _ligatures;
    char _tocLinksEnabled;
    char _showCTMarkup;
    char _showCTDeletions;
    char _changeBarsVisible;
    char _formatChangesVisible;
    char _annotationsVisible;
    char _documentIsRTL;
    long long _footnoteKind;
    long long _footnoteFormat;
    long long _footnoteNumbering;
    long long _footnoteGap;
    NSString *_decimalTab;
    NSString *_language;
    NSString *_hyphenationLanguage;
    NSString *_creationLocale;
    NSString *_originalTemplate;
    NSString *_creationDate;
    NSString *_bibliographyFormat;
}

@property (nonatomic) char hasBody;
@property (nonatomic) char hasHeaders;
@property (nonatomic) char hasFooters;
@property (nonatomic) char hasFacingPages;
@property (nonatomic) char quickLookPreview;
@property (nonatomic) char copyMovies;
@property (nonatomic) char copyTemplateAssets;
@property (nonatomic) char placeholderAuthoring;
@property (nonatomic) char sectionAuthoring;
@property (nonatomic) char hyperlinksEnabled;
@property (nonatomic) char autoHyphenation;
@property (nonatomic) char useLigatures;
@property (nonatomic) char tocLinksEnabled;
@property (nonatomic) char documentIsRTL;
@property (nonatomic) char showCTMarkup;
@property (nonatomic) char showCTDeletions;
@property (nonatomic) int ctBubblesVisibility;
@property (nonatomic) char changeBarsVisible;
@property (nonatomic) char formatChangesVisible;
@property (nonatomic) char annotationsVisible;
@property (nonatomic) long long footnoteKind;
@property (nonatomic) long long footnoteFormat;
@property (nonatomic) long long footnoteNumbering;
@property (nonatomic) long long footnoteGap;
@property (readonly, nonatomic) long long basicFootnoteFormat;
@property (copy, nonatomic) NSString *decimalTab;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *hyphenationLanguage;
@property (copy, nonatomic) NSString *creationLocale;
@property (copy, nonatomic) NSString *originalTemplate;
@property (copy, nonatomic) NSString *creationDate;
@property (copy, nonatomic) NSString *bibliographyFormat;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)saveToArchiver:(id)a0;
- (void)loadFromUnarchiver:(id)a0;
- (void)resetForNewDocumentFromTemplate:(id)a0 locale:(id)a1;
- (void)setCTBubblesVisibility:(int)a0;
- (id)stringWithCurrentDate;

@end
