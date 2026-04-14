@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord

@property (nonatomic) BOOL forwardAdjustment;
@property (nonatomic) int granularity;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (void)removeContextFromKeyboardState;
- (id)currentKeyboardState;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)replaceDocumentState:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;

@end
