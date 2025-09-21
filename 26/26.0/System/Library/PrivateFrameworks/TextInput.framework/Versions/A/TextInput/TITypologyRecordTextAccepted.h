@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (id)textSummary;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)changedText;

@end
