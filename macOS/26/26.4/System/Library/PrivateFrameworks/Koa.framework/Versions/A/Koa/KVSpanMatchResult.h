@class SEMSpanMatchResult;

@interface KVSpanMatchResult : NSObject <NSCopying>

@property (readonly, nonatomic) SEMSpanMatchResult *spanMatchResult;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)itemInfo;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (float)score;
- (id)spanInfo;
- (id)spanValue;
- (id)fieldMatches;
- (id)initWithSpanMatchResult:(id)a0;
- (BOOL)isEqualToSpanMatchResult:(id)a0;

@end
