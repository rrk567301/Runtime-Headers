@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (BOOL)delayedCandidateList;
- (BOOL)usesCandidateSelection;
- (id)keyboardBehaviors;
- (void)loadDictionaries;
- (BOOL)supportsSetPhraseBoundary;
- (void)loadFavoniusTypingModel;

@end
