@class NSString, TIKeyboardCandidate, TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;
@property (copy, nonatomic) NSString *textToCommit;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (id)textSummary;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (id)changedText;

@end
