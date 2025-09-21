@class NSString;
@protocol IMKKeyboard, IMKCandidateEngine, IMKTextDocument;

@interface IMKSignpostInputMethod : IMKDecorator <IMKInputMethod>

@property (readonly, weak, nonatomic) id<IMKKeyboard> attachedKeyboard;
@property (retain, nonatomic) id<IMKTextDocument> attachedTextDocument;
@property (retain, nonatomic) id<IMKCandidateEngine> candidateEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)commitComposition;
- (void)composeText:(id)a0 onCompletion:(id /* block */)a1;
- (char)didAcceptCandidate:(id)a0;
- (char)didPressKey:(id)a0 whileInKeyboardState:(id)a1;
- (char)didReleaseKey:(id)a0 whileInKeyboardState:(id)a1;
- (char)keyboard:(id)a0 didChange:(id)a1 to:(id)a2;

@end
