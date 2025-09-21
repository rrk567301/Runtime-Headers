@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
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

@end
