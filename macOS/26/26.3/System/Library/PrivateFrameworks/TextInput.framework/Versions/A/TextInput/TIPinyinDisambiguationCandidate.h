@class NSString;

@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    NSString *_label;
}

@property (nonatomic, getter=isGeneratedByChoosePinyin) BOOL generatedByChoosePinyin;

+ (BOOL)supportsSecureCoding;
+ (int)type;
+ (id)candidateWithPinyinSyllable:(id)a0;

- (void)setLabel:(id)a0;
- (id)label;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithCandidateResultSetCoder:(id)a0;
- (id)initWithCandidateResultSetCoder:(id)a0;
- (id)initWithPinyinSyllable:(id)a0;

@end
