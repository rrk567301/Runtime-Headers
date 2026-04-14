@class TIKeyboardCandidate;

@interface TITypologyRecordTextAccepted : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)textSummary;
- (id)changedText;
- (void)applyToStatistic:(id)a0;

@end
