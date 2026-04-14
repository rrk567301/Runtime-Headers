@class NSString, NSData;

@interface KVSpanInfo : NSObject <NSCopying> {
    NSString *_value;
    NSData *_buffer;
    const struct SpanInfo { unsigned char x0[1]; } *_spanInfo;
}

+ (id)spanInfoFromEncodedString:(id)a0 error:(id *)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)value;
- (id)encodedString;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })spanRange;
- (float)matchScore;
- (unsigned int)editDistance;
- (BOOL)isPartialMatch;
- (BOOL)isApproximateMatch;
- (BOOL)isAliasMatch;
- (id)initWithValue:(id)a0 location:(unsigned int)a1 length:(unsigned int)a2 matchScore:(float)a3 maxTokenCount:(unsigned int)a4 matchedTokenCount:(unsigned int)a5 maxStopWordCount:(unsigned int)a6 matchedStopWordCount:(unsigned int)a7 maxAliasCount:(unsigned int)a8 matchedAliasCount:(unsigned int)a9 editDistance:(unsigned int)a10;
- (id)initWithBuffer:(id)a0 verify:(BOOL)a1 value:(id)a2 error:(id *)a3;
- (unsigned int)maxTokenCount;
- (unsigned int)matchedTokenCount;
- (unsigned int)maxStopWordCount;
- (unsigned int)matchedStopWordCount;
- (unsigned int)maxAliasCount;
- (unsigned int)matchedAliasCount;
- (BOOL)isEqualToSpanInfo:(id)a0;

@end
