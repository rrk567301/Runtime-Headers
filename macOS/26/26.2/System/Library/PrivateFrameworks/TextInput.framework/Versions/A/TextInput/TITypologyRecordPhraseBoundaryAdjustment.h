@class TIKeyboardConfiguration, TIKeyboardState;

@interface TITypologyRecordPhraseBoundaryAdjustment : TITypologyRecord

@property (nonatomic) BOOL forwardAdjustment;
@property (nonatomic) int granularity;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardConfiguration *keyboardConfig;

+ (BOOL)supportsSecureCoding;

- (id)shortDescription;
- (void)replaceDocumentState:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)applyToStatistic:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)currentKeyboardState;

@end
