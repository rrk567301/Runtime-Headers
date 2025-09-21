@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *category;

+ (char)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (char)isFacemarkCandidate;

@end
