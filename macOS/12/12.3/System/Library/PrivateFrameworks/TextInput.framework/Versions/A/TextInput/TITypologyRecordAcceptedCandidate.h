@class NSString, TIKeyboardCandidate, TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;
@property (copy, nonatomic) NSString *textToCommit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)textSummary;
- (id)changedText;
- (id)currentKeyboardState;
- (void)removeContextFromKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (void)applyToStatistic:(id)a0;

@end
