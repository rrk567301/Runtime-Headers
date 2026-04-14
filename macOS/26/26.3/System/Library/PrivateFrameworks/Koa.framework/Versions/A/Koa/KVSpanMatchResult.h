@class SEMSpanMatchResult;

@interface KVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanMatchResult *spanMatchResult;

- (id)description;
- (float)score;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)itemInfo;
- (unsigned long long)hash;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (id)initWithSpanMatchResult:(id)a0;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
