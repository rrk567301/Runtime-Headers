@class NSData, NSURL, NSNumber;

@interface ATXPredictedDocumentIdentity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *bookmarkData;
@property (readonly, nonatomic) NSURL *documentURL;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSNumber *predictionScore;
@property (readonly, nonatomic) unsigned long long type;

+ (unsigned long long)documentSuggestionTypeFromString:(id)a0;
+ (id)stringForDocumentSuggestionType:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDocumentURL:(id)a0 predictionScore:(id)a1;
- (id)initWithDocumentURL:(id)a0 predictionScore:(id)a1 bookmarkData:(id)a2 type:(unsigned long long)a3;
- (id)initWithDocumentURL:(id)a0 predictionScore:(id)a1 type:(unsigned long long)a2;

@end
