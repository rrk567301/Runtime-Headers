@class NSString, TIKeyboardCandidate, TIKeyboardInput, TIDocumentState;

@interface TIKeyboardInteractionProtocolEventCandidateAccepted : TIKeyboardInteractionProtocolBase <TIKeyboardInteractionProtocolEvent>

@property (readonly, nonatomic) TIKeyboardCandidate *candWord;
@property (readonly, nonatomic) TIKeyboardInput *input;
@property (readonly, nonatomic) TIDocumentState *documentState;
@property (readonly, nonatomic) NSString *context;
@property (readonly, nonatomic) NSString *inputStem;
@property (readonly, nonatomic) char predictionBarHit;
@property (readonly, nonatomic) char useCandidateSelection;
@property (readonly, nonatomic) long long candidateIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)sendTo:(id)a0;
- (id)initWithCandidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(char)a5 useCandidateSelection:(char)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;

@end
