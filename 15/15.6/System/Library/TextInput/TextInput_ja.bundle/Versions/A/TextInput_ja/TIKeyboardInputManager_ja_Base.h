@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (char)supportsSetPhraseBoundary;
- (char)usesCandidateSelection;
- (char)delayedCandidateList;
- (id)keyboardBehaviors;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;

@end
