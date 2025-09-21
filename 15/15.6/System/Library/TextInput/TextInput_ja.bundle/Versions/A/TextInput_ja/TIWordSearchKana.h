@class TIWordSearchCandidateResultSet;

@interface TIWordSearchKana : TIWordSearch {
    unsigned long long _insertKatakanaAtIndex;
}

@property (retain, nonatomic) TIWordSearchCandidateResultSet *candidateResultSet;
@property char supportsPairedPunctutationInput;
@property char flickOnly;

+ (void)clearCachedContactObserver;
+ (id /* block */)configureContactCollectionObserver:(id)a0 previousObserver:(id /* block */)a1;
+ (void)resetSharedMecabraWrapper;
+ (id)sharedMecabraWrapper;

- (void)dealloc;
- (void).cxx_destruct;
- (int)mecabraInputMethodType;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (void)dynamicDictionariesRemoved:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)initTIWordSearchWithInputMode:(id)a0 mecabraWrapper:(id)a1;
- (unsigned long long)mecabraCreationOptions;
- (void)updateMecabraState;
- (char)_insertString:(id)a0 input:(id)a1 at:(unsigned long long)a2 force:(char)a3;
- (id)candidateForDefault:(id)a0 rawInputString:(id)a1;
- (char)isAnalyzingJapaneseRomaji;
- (id)makeCandidates:(id)a0 input:(id)a1 contextString:(id)a2 predictionEnabled:(char)a3 reanalysisMode:(char)a4 withInputManager:(id)a5 geometryModelData:(id)a6 flickUsed:(char)a7 hardwareKeyboardMode:(char)a8 referenceMode:(char)a9 singlePhrase:(char)a10;
- (void)setInsertKatakanaAtIndex:(unsigned long long)a0;
- (char)shouldMoveCursor:(id)a0;

@end
