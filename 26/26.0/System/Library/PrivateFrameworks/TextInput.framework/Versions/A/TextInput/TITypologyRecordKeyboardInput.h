@class TIKeyboardOutput, TIKeyboardInput, TIKeyboardState, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord

@property (retain, nonatomic) TIKeyboardInput *input;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardOutput *output;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (id)textSummary;
- (void)replaceDocumentState:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (id)currentKeyboardState;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)changedText;

@end
