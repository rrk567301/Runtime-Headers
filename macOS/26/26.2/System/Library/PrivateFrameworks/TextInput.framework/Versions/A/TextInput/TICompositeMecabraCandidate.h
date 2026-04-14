@class NSString, NSArray;

@interface TICompositeMecabraCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *remainderCandidateString;
@property (copy, nonatomic) NSArray *autoconvertedCandidatePointerValues;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)label;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;

@end
