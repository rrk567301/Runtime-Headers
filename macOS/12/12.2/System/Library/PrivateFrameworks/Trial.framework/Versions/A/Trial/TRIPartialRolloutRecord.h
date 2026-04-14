@class NSString, NSArray, TRIRolloutDeployment, NSNumber;
@protocol TRIFactorPackSetId;

@interface TRIPartialRolloutRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIRolloutDeployment *deployment;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *activeFactorPackSetId;
@property (readonly, nonatomic) NSNumber *activeTargetingRuleIndex;
@property (readonly, nonatomic) NSString<TRIFactorPackSetId> *targetedFactorPackSetId;
@property (readonly, nonatomic) NSNumber *targetedTargetingRuleIndex;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSArray *namespaces;
@property (readonly, nonatomic) BOOL isShadow;

+ (id)partialRecordWithFullRecord:(id)a0;
+ (id)recordWithDeployment:(id)a0 activeFactorPackSetId:(id)a1 activeTargetingRuleIndex:(id)a2 targetedFactorPackSetId:(id)a3 targetedTargetingRuleIndex:(id)a4 status:(long long)a5 namespaces:(id)a6 isShadow:(BOOL)a7;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToRecord:(id)a0;
- (id)initWithDeployment:(id)a0 activeFactorPackSetId:(id)a1 activeTargetingRuleIndex:(id)a2 targetedFactorPackSetId:(id)a3 targetedTargetingRuleIndex:(id)a4 status:(long long)a5 namespaces:(id)a6 isShadow:(BOOL)a7;
- (id)copyWithReplacementStatus:(long long)a0;
- (id)copyWithReplacementNamespaces:(id)a0;
- (id)copyWithReplacementIsShadow:(BOOL)a0;
- (id)copyWithReplacementDeployment:(id)a0;
- (id)copyWithReplacementActiveFactorPackSetId:(id)a0;
- (id)copyWithReplacementActiveTargetingRuleIndex:(id)a0;
- (id)copyWithReplacementTargetedFactorPackSetId:(id)a0;
- (id)copyWithReplacementTargetedTargetingRuleIndex:(id)a0;

@end
