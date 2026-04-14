@class NSString, NSMutableArray, TIMathSymbolPunctuationController;

@interface TIKeyboardInputManagerLiveConversion_ja_Romaji : TIKeyboardInputManagerLiveConversion_ja {
    TIMathSymbolPunctuationController *_mathSymbolPunctuationController;
}

@property (readonly, nonatomic) NSMutableArray *externalIndexToInternalIndexMappingArray;
@property (nonatomic) unsigned long long externalInputIndex;
@property (copy, nonatomic) NSString *externalString;

+ (Class)wordSearchClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateState;
- (void)setInput:(id)a0;
- (id)inputString;
- (void)clearInput;
- (void)setInputIndex:(unsigned int)a0;
- (id)searchStringForMarkedText;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void)addInput:(id)a0 withContext:(id)a1;
- (void)inputLocationChanged;
- (id)deleteFromInput:(unsigned long long *)a0;
- (id)displayStringForSearch;
- (id)segmentAdjustInputManager:(unsigned long long)a0;
- (id)rawInputStringFrom:(id)a0;
- (id)hiraganaStringFor:(id)a0;
- (id)transliterate:(id)a0;
- (void)_addInput:(id)a0;

@end
