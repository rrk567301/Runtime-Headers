@interface TIInputManagerHandwriting_ja : TIInputManagerHandwriting

+ (Class)wordSearchClass;

- (id)handleKeyboardInput:(id)a0;
- (int)recognitionMode;
- (id)recognitionLanguage;
- (void *)initImplementation;
- (void)loadFavoniusTypingModel;

@end
