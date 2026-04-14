@class NSString;

@interface TITextAnimationCandidate : TIKeyboardCandidateSingle

@property (readonly, nonatomic) NSString *textEffectName;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithCandidate:(id)a0 forInput:(id)a1 forTextEffectName:(id)a2;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)candidateProperty;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateWithCandidate:(id)a0 forInput:(id)a1 forTextEffectName:(id)a2;

@end
