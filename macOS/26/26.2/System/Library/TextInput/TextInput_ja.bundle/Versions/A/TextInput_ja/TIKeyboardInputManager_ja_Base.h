@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (void)loadDictionaries;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyboardBehaviors;
- (void)loadFavoniusTypingModel;

@end
