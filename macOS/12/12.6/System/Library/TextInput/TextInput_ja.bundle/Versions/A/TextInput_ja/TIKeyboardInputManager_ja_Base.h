@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManager_zh_ja

- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (void)loadFavoniusTypingModel;
- (void)loadDictionaries;

@end
