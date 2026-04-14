@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *category;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (BOOL)isFacemarkCandidate;
- (id)initWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;

@end
