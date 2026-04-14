@interface TIKeyboardInputManager_ja_Base : TIKeyboardInputManager_zh_ja

- (BOOL)delayedCandidateList;
- (id)keyboardBehaviors;
- (BOOL)supportsSetPhraseBoundary;
- (BOOL)usesCandidateSelection;
- (void)loadDictionaries;
- (void)loadFavoniusTypingModel;

@end
