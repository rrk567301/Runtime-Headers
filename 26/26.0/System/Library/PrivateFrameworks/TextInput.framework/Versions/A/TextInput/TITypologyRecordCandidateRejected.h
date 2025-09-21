@class TIKeyboardCandidate;

@interface TITypologyRecordCandidateRejected : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;

@end
