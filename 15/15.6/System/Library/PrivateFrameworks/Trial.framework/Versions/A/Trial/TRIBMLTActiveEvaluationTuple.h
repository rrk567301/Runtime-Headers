@class TRIClientBackgroundMLTask, TRIFactorsState;

@interface TRIBMLTActiveEvaluationTuple : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TRIClientBackgroundMLTask *bmlt;
@property (readonly, nonatomic) TRIFactorsState *factorsState;

+ (id)tupleWithBmlt:(id)a0 factorsState:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToTuple:(id)a0;
- (id)copyWithReplacementBmlt:(id)a0;
- (id)copyWithReplacementFactorsState:(id)a0;
- (id)initWithBmlt:(id)a0 factorsState:(id)a1;

@end
