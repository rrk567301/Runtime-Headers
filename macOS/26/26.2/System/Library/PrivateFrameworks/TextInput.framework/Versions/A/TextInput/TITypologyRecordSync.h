@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

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

@end
