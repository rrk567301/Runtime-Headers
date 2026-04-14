@class TRIClientBackgroundMLTask, TRIFactorsState;

@interface TRIBMLTActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) TRIClientBackgroundMLTask *bmlt;
@property (readonly, nonatomic) TRIFactorsState *factorsState;

+ (id)tupleWithBmlt:(id)a0 factorsState:(id)a1;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithReplacementFactorsState:(id)a0;
- (BOOL)isEqualToTuple:(id)a0;
- (id)initWithBmlt:(id)a0 factorsState:(id)a1;
- (id)copyWithReplacementBmlt:(id)a0;

@end
