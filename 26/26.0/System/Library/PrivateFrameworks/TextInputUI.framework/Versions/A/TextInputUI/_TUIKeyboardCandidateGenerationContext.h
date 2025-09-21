@class TICandidateRequestToken, TIKeyboardState;

@interface _TUIKeyboardCandidateGenerationContext : NSObject

@property (readonly, nonatomic) TIKeyboardState *keyboardState;
@property (readonly, nonatomic) TICandidateRequestToken *requestToken;
@property (readonly, nonatomic) BOOL usesCandidateSelection;
@property (readonly, nonatomic) unsigned long long keyboardSuggestionOptions;

- (void).cxx_destruct;
- (id)initWith:(id)a0 requestToken:(id)a1 usesCandidateSelection:(BOOL)a2;
- (id)initWith:(id)a0 requestToken:(id)a1 usesCandidateSelection:(BOOL)a2 keyboardSuggestionOptions:(unsigned long long)a3;

@end
