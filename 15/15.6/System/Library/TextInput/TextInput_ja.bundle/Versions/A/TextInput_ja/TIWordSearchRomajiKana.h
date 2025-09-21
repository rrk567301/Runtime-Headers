@class Romakana;

@interface TIWordSearchRomajiKana : TIWordSearchKana {
    Romakana *_romakana;
}

- (void).cxx_destruct;
- (id)uncachedCandidatesForOperation:(id)a0;
- (char)isAnalyzingJapaneseRomaji;

@end
