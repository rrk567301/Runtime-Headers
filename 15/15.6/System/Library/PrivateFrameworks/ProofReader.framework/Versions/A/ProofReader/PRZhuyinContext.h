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
    char _lastSyllableIsPartial;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)reset;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)addedModifications;
- (id)removedModifications;
- (void)_advanceIndexes;
- (void)_addDeletions;
- (void)_addTranspositions;
- (void)_addInsertions;
- (void)_addReplacements;
- (void)_filterModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (id)currentModifications;
- (void)removeNumberOfInputCharacters:(unsigned long long)a0;

@end
