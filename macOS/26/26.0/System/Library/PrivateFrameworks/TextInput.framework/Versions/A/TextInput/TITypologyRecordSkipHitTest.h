@class TIKeyboardTouchEvent, TIKeyboardLayout, TIKeyboardState;

@interface TITypologyRecordSkipHitTest : TITypologyRecord

@property (retain, nonatomic) TIKeyboardTouchEvent *touchEvent;
@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardLayout *keyLayout;

+ (BOOL)supportsSecureCoding;

- (void)replaceDocumentState:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)encodeWithCoder:(id)a0;
- (id)currentKeyboardState;
- (void)applyToStatistic:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (void).cxx_destruct;

@end
