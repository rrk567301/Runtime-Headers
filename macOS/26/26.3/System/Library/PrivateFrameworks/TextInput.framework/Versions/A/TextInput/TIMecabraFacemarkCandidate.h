@class NSString;

@interface TIMecabraFacemarkCandidate : TIMecabraCandidate

@property (copy, nonatomic) NSString *category;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 category:(id)a1 input:(id)a2 mecabraCandidatePointerValue:(id)a3;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (BOOL)isFacemarkCandidate;

@end
