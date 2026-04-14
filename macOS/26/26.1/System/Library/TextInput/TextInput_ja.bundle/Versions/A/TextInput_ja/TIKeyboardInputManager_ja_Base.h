@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyboardBehaviors;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;

@end
