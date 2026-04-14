@class NSString, TIKeyboardCandidate, TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordAcceptedCandidate : TITypologyRecord

@property (retain, nonatomic) TIKeyboardCandidate *candidate;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;
@property (copy, nonatomic) NSString *textToCommit;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (id)textSummary;
- (void).cxx_destruct;
- (id)currentKeyboardState;
- (id)changedText;

@end
