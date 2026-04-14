@class NSMutableArray;

@interface PRPinyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    NSMutableArray *_guesses;
    NSMutableArray *_completions;
    NSMutableArray *_corrections;
    char *_buffer;
    char *_altBuffer;
    char *_altBufferScores;
    NSMutableArray *_geometryDataArray;
    unsigned long long *_syllableLengthArray;
    void *_connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    unsigned long long _lastIndexes[4];
    unsigned long long _nextIndexes[2];
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    unsigned long long _abbreviatedSyllableCount;
    unsigned long long _previouslyAnalyzedLength;
    double _validSequenceCorrectionThreshold;
    int _romanization;
    BOOL _lastSyllableIsPartial;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)reset;
- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)correction;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (id)completions;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_advanceIndexes;
- (void)_addTranspositions;
- (void)_addReplacements;
- (void)_addInsertions;
- (void)_addDeletions;
- (void)_filterModifications;
- (void)removeNumberOfInputCharacters:(unsigned long long)a0;
- (id)currentModifications;
- (id)guesses;
- (double)validSequenceCorrectionThreshold;
- (int)romanization;
- (BOOL)_addEnglishWordForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 quickly:(BOOL)a1;
- (BOOL)_addEnglishWordsEndingAtIndex:(unsigned long long)a0 quickly:(BOOL)a1;
- (void)_addEnglishWordsQuickly:(BOOL)a0;
- (void)_addSpecialEnglishWords;
- (void)_addValidSequenceReplacements;
- (void)_addPrefixes;
- (void)_removePrefixes;

@end
