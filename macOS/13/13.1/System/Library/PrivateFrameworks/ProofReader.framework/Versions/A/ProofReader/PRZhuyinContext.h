@class NSMutableArray;

@interface PRZhuyinContext : PRAutocorrectionContext {
    NSMutableArray *_modifications;
    NSMutableArray *_addedModifications;
    NSMutableArray *_removedModifications;
    NSMutableArray *_addedRemovedModifications;
    NSMutableArray *_prefixes;
    char *_buffer;
    unsigned long long *_syllableLengthArray;
    void *_connection;
    unsigned long long _length;
    unsigned long long _lengthBeforeApostrophes;
    unsigned long long _startingPoint;
    unsigned long long _lastIndexes[4];
    unsigned long long _nextIndexes[2];
    unsigned long long _startIndex;
    unsigned long long _endIndex;
    BOOL _lastSyllableIsPartial;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)reset;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)addedModifications;
- (id)removedModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)_advanceIndexes;
- (void)_addTranspositions;
- (void)_addReplacements;
- (void)_addInsertions;
- (void)_addDeletions;
- (void)_filterModifications;
- (void)removeNumberOfInputCharacters:(unsigned long long)a0;
- (id)currentModifications;

@end
