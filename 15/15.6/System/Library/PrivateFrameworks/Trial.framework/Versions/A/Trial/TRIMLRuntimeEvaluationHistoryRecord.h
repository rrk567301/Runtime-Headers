@class TRIEvaluationStatus, TRIMLRuntimeEvaluation;

@interface TRIMLRuntimeEvaluationHistoryRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) TRIMLRuntimeEvaluation *evaluation;
@property (readonly, nonatomic) TRIEvaluationStatus *status;

+ (id)recordWithEvaluation:(id)a0 status:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToRecord:(id)a0;
- (id)copyWithReplacementEvaluation:(id)a0;
- (id)copyWithReplacementStatus:(id)a0;
- (id)initWithEvaluation:(id)a0 status:(id)a1;

@end
