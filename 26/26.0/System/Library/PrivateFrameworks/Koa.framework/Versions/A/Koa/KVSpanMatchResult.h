@class SEMSpanMatchResult;

@interface KVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanMatchResult *spanMatchResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)score;
- (id)description;
- (id)itemInfo;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (id)initWithSpanMatchResult:(id)a0;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
