@class TICandidateRequestToken, TIKeyboardState;

@interface _TUIKeyboardCandidateGenerationContext : NSObject

@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) TICandidateRequestToken *requestToken;
@property (readonly, nonatomic) char usesCandidateSelection;

- (void).cxx_destruct;
- (id)initWith:(id)a0 requestToken:(id)a1 usesCandidateSelection:(char)a2;

@end
