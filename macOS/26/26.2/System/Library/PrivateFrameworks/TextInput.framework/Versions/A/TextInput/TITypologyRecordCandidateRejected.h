@class TIKeyboardCandidate;

@interface TITypologyRecordCandidateRejected : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (id)initWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
