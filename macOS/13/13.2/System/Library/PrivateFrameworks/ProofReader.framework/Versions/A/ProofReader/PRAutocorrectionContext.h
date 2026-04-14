@interface PRAutocorrectionContext : NSObject {
    unsigned long long _modificationMask;
}

+ (void)clearCaches;
+ (id)autocorrectionContextOfType:(unsigned long long)a0;

- (void)reset;
- (void)addInputCharacter:(unsigned short)a0 geometryModel:(void *)a1 geometryData:(id)a2;
- (id)prefixes;
- (id)removedModifications;
- (id)addedModifications;
- (id)correction;
- (void)setValidSequenceCorrectionThreshold:(double)a0;
- (id)completions;
- (id)currentModifications;
- (void)addInputCharacter:(unsigned short)a0 geometryData:(id)a1;
- (void)setModificationMask:(unsigned long long)a0;
- (unsigned long long)modificationMask;
- (id)guesses;
- (double)validSequenceCorrectionThreshold;

@end
