@class _TtC11TextInputUI28TUITextComposerClientWrapper;

@interface TUISmartActionGenerator : NSObject <TUIPredictionGenerator>

@property (nonatomic) BOOL enabled;
@property (nonatomic, retain) _TtC11TextInputUI28TUITextComposerClientWrapper *textComposerClient;

- (id)init;
- (void).cxx_destruct;
- (void)syncToKeyboardState:(id)a0;
- (long long)candidateSourceType;
- (void)generateCandidatesWithContext:(id)a0 completion:(id /* block */)a1;
- (long long)generatedCandidateType;

@end
