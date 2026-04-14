@class TICandidateRequestToken, TIAutocorrectionList, TIKeyboardState;

@interface TITypologyRecordAutocorrections : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;
@property (retain, nonatomic) TIAutocorrectionList *autocorrections;
@property (nonatomic) BOOL listUIDisplayed;

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
