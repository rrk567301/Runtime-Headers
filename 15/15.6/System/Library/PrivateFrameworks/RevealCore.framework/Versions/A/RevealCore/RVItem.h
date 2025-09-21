@class NSString, RVQuery, NSURL, DDScannerResult, NSAttributedString;

@interface RVItem : NSObject <NSSecureCoding> {
    char _normalized;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long normalizedType;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) DDScannerResult *ddResult;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *contactPropertyValue;
@property (readonly, nonatomic) long long contactPropertyType;
@property (readonly, nonatomic) long long selectionType;
@property (readonly, nonatomic) NSString *textSearchContext;
@property (retain, nonatomic) NSString *leadingText;
@property (retain, nonatomic) NSString *trailingText;
@property (retain, nonatomic) NSString *originalSelectedText;
@property (readonly, nonatomic) RVQuery *query;
@property (copy, nonatomic) id /* block */ textQueryProvider;
@property (copy, nonatomic) id /* block */ reportAnIssueBlock;
@property (copy, nonatomic) id /* block */ reportAnIssueExtendedBlock;
@property (copy, nonatomic) id /* block */ reportAnIssueMetadataFetchingBlock;
@property (copy, nonatomic) id /* block */ lookupContextFetchingBlock;
@property (readonly, nonatomic) NSAttributedString *attributedText;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } highlightRange;
@property (readonly, nonatomic) NSURL *normalizedURL;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) id clientHints;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAttributedText:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 lookup:(char)a2;
- (id)initWithDDResult:(id)a0;
- (id)initWithText:(id)a0 clickedIndex:(unsigned long long)a1 selectionRanges:(id)a2 shouldUpdateSelection:(char *)a3;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithURL:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)normalizedAttributedStringCopy:(id)a0;
- (id)getClientHintKey:(id)a0 ofType:(Class)a1;
- (id)initWithClientIdentifier:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithContactProperty:(long long)a0 value:(id)a1 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithDDResult:(id)a0 text:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)initWithSearchQuery:(id)a0 rangeInContext:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithText:(id)a0 selectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 customURLParser:(id /* block */)a2;

@end
