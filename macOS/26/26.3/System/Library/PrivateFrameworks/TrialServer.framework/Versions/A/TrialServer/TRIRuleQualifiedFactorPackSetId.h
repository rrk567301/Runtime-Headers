@class NSString;
@protocol TRIFactorPackSetId;

@interface TRIRuleQualifiedFactorPackSetId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *ident;
@property (readonly, nonatomic) int targetingRuleIndex;

+ (id)factorPackSetIdWithIdent:(id)a0 targetingRuleIndex:(int)a1;

- (id)initWithIdent:(id)a0 targetingRuleIndex:(int)a1;
- (id)description;
- (id)copyWithReplacementIdent:(id)a0;
- (id)init;
- (BOOL)isEqualToFactorPackSetId:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithReplacementTargetingRuleIndex:(int)a0;

@end
