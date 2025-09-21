@class SEMSpanMatchResult;

@interface KVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanMatchResult *spanMatchResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (float)score;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (id)itemInfo;
- (id)initWithSpanMatchResult:(id)a0;
- (char)isEqualToSpanMatchResult:(id)a0;

@end
