@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManagerLiveConversion_ja_Romaji : TIKeyboardInputManagerLiveConversion_ja {
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

@property (readonly, nonatomic) NSMutableArray *externalIndexToInternalIndexMappingArray;
@property (nonatomic) unsigned long long externalInputIndex;
@property (copy, nonatomic) NSString *externalString;

+ (Class)wordSearchClass;

- (void)clearInput;
- (id)searchStringForMarkedText;
- (void)setInput:(id)a0;
- (void)updateState;
- (void)dealloc;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)setInputIndex:(unsigned int)a0;
- (id)inputString;
- (void).cxx_destruct;
- (void)addInput:(id)a0 withContext:(id)a1;
- (id)deleteFromInput:(unsigned long long *)a0;
- (void)inputLocationChanged;
- (void)_addInput:(id)a0 point:(struct CGPoint { double x0; double x1; })a1;
- (id)displayStringForSearch;
- (id)hiraganaStringFor:(id)a0;
- (id)rawInputStringFrom:(id)a0;
- (id)segmentAdjustInputManager:(unsigned long long)a0;
- (id)transliterate:(id)a0;

@end
