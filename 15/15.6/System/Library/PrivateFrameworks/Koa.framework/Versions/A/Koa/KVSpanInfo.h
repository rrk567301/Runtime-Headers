@class SEMSpanInfo;

@interface KVSpanInfo : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanInfo *spanInfo;

+ (id)spanInfoFromEncodedString:(id)a0 error:(id *)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)matchScore;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })spanRange;
- (unsigned int)editDistance;
- (unsigned int)matchedAliasCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxAliasCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)maxTokenCount;
- (char)isApproximateMatch;
- (char)isPartialMatch;
- (id)getAliasTypesArray;
- (id)initWithSpanInfo:(id)a0;
- (char)isAliasMatch;
- (char)isEqualToSpanInfo:(id)a0;

@end
