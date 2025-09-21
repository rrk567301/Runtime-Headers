@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
}

@property (nonatomic, getter=isGeneratedByChoosePinyin) BOOL generatedByChoosePinyin;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithPinyinSyllable:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)label;
- (id)initWithCoder:(id)a0;
- (void)setLabel:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithPinyinSyllable:(id)a0;

@end
