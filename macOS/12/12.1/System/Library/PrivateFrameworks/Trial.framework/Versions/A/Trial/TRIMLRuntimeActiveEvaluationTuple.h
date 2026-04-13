@class TRIFactorsState, TRIMLRuntimeEvaluation;

@interface TRIMLRuntimeActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIMLRuntimeEvaluation *eval;
@property (readonly, nonatomic) TRIFactorsState *factorsState;

+ (id)tupleWithEval:(id)a0 factorsState:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEval:(id)a0 factorsState:(id)a1;
- (BOOL)isEqualToTuple:(id)a0;
- (id)copyWithReplacementEval:(id)a0;
- (id)copyWithReplacementFactorsState:(id)a0;

@end
