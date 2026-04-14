@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordSync : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

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

@end
