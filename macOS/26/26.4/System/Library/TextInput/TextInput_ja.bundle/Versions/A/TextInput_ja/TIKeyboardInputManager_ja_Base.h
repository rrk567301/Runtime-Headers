@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManagerMecabra

- (BOOL)usesCandidateSelection;
- (void)loadDictionaries;
- (BOOL)delayedCandidateList;
- (BOOL)supportsSetPhraseBoundary;
- (id)keyboardBehaviors;
- (void)loadFavoniusTypingModel;

@end
