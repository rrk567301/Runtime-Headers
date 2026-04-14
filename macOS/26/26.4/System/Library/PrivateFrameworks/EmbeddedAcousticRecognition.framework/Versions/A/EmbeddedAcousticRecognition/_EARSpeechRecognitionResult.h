@class NSArray;

@interface _EARSpeechRecognitionResult : NSObject <NSCopying>

@property (readonly, nonatomic) double utteranceStart;
@property (readonly, nonatomic) long long utteranceStartMilliseconds;
@property (readonly, nonatomic) struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *__begin_; struct Token *__end_; struct { struct Token *__cap_; } ; } quasarTokens;
@property (readonly, nonatomic) struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *__begin_; struct Token *__end_; struct { struct Token *__cap_; } ; } quasarPreItnTokens;
@property (readonly, nonatomic) BOOL isComplete;
@property (readonly, nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } resultCosts;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSArray *preITNTokens;
@property (readonly, nonatomic) double confidence;
@property (readonly, copy, nonatomic) NSArray *voiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNVoiceCommandInterpretations;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)description;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a1;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a1 confidence:(double)a2;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a1 confidence:(double)a2 voiceCommandInterpretations:(id)a3 preITNVoiceCommandInterpretations:(id)a4 utteranceStartMilliseconds:(long long)a5 preITNUseHatText:(BOOL)a6 formattingInfo:(const void *)a7;
- (id)_initWithTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a0 preITNTokens:(struct vector<quasar::Token, std::allocator<quasar::Token>> { struct Token *x0; struct Token *x1; struct { struct Token *x0; } x2; })a1 confidence:(double)a2 voiceCommandInterpretations:(id)a3 preITNVoiceCommandInterpretations:(id)a4 utteranceStartMilliseconds:(long long)a5 preITNUseHatText:(BOOL)a6 formattingInfo:(const void *)a7 isComplete:(BOOL)a8;

@end
