@class NSString;

@interface TILiveConversionCandidate : TIMecabraCandidate {
    NSString *_candidate;
}

@property (nonatomic, getter=isInlineCandidate) BOOL inlineCandidate;
@property (nonatomic, getter=isPartialCandidate) BOOL partialCandidate;

+ (BOOL)supportsSecureCoding;
+ (int)type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (id)candidate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithSurface:(id)a0 input:(id)a1 candidate:(id)a2 mecabraCandidatePointerValue:(id)a3;

@end
