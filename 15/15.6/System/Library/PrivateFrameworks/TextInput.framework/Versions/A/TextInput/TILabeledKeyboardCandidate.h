@class NSString;

@interface TILabeledKeyboardCandidate : TIKeyboardCandidateSingle {
    long long _transliterationType;
    char _transliterationCandidate;
}

@property (copy, nonatomic) NSString *label;

+ (char)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 label:(id)a2;
- (id)initWithCandidate:(id)a0 forInput:(id)a1 label:(id)a2 transliterationType:(long long)a3;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (char)isTransliterationCandidate;

@end
