@class TIKeyboardCandidateResultSet, TICandidateRequestToken, TIKeyboardState;

@interface TITypologyRecordCandidateResultSet : TITypologyRecord

@property (retain, nonatomic) TIKeyboardState *keyboardState;
@property (retain, nonatomic) TIKeyboardCandidateResultSet *resultSet;
@property (retain, nonatomic) TICandidateRequestToken *requestToken;

+ (BOOL)supportsSecureCoding;

- (id)currentKeyboardState;
- (void)replaceDocumentState:(id)a0;
- (void)removeContextFromKeyboardState;
- (void)applyToStatistic:(id)a0;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
