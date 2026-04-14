@class NSString;

@interface SiriSharedUIMiniSnippetModel : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ featureChecker;
    void /* function */ refId;
    void /* function */ utteranceText;
    void /* function */ rewrittenQuery;
    void /* function */ summarizationText;
    void /* function */ fallbackText;
    void /* function */ miniSnippetText;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic) BOOL isStreaming;
@property (nonatomic, readonly) NSString *refId;
@property (nonatomic, readonly) NSString *utteranceText;
@property (nonatomic, readonly) NSString *rewrittenQuery;
@property (nonatomic, copy) NSString *summarizationText;
@property (nonatomic, copy) NSString *fallbackText;
@property (nonatomic, copy) NSString *miniSnippetText;
@property (nonatomic) BOOL isRestored;
@property (nonatomic, readonly) NSString *description;

+ (void)readFromDisk:(id /* block */)a0;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)writeToDisk:(id /* block */)a0;
- (void)updateFallbackTextFromBundleId:(id)a0;
- (id)copyWithRewrittenQuery:(id)a0;
- (id)copyWithUtteranceText:(id)a0;
- (id)getFallbackTextFromResponseViewId:(id)a0;
- (id)initWithCoder:(id)a0 isRestored:(BOOL)a1;
- (id)initWithRefId:(id)a0;
- (id)initWithRefId:(id)a0 utteranceText:(id)a1;
- (id)initWithRefId:(id)a0 utteranceText:(id)a1 rewrittenQuery:(id)a2 miniSnippetText:(id)a3;
- (void)summarizeUtteranceText:(id)a0;
- (void)updateFallbackTextFromBundleName:(id)a0;
- (void)updateFallbackTextFromResponseViewId:(id)a0;
- (void)updateFallbackTextWithText:(id)a0;

@end
