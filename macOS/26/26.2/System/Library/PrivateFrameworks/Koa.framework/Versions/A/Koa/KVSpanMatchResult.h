@class SEMSpanMatchResult;

@interface KVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanMatchResult *spanMatchResult;

- (float)score;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)itemInfo;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (id)initWithSpanMatchResult:(id)a0;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
