@class _CSEmbedding, NSAttributedString, NSError;

@interface CSAttributedQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSAttributedString *query;
@property (readonly, nonatomic) _CSEmbedding *queryEmbedding;
@property (nonatomic) float highPrecisionDistanceThresh;
@property (nonatomic) float veryHighPrecisionDistanceThresh;
@property (readonly, nonatomic) BOOL isUnsafeQuery;
@property (readonly, nonatomic) NSError *error;

+ (id)_getNSDateComponentsFromDictionary:(id)a0;
+ (void)_updateAttributedQuery:(id)a0 withAttributedParses:(id)a1;
+ (void)_updateAttributedQuery:(id)a0 withOutputTokenInfo:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAttributedParses:(id)a0 outputTokenInfo:(id)a1 embedding:(id)a2 highPrecisionDistanceThresh:(float)a3 veryHighPrecisionDistanceThresh:(float)a4 isUnsafeQuery:(BOOL)a5 error:(struct __CFError { } *)a6;
- (id)initWithAttributedQuery:(id)a0;
- (id)initWithAttributedQuery:(id)a0 embedding:(id)a1;

@end
