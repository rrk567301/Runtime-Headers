@interface SCRCComposedCharacter : NSObject {
    unsigned long long _originalRepresentationLength;
    unsigned long long _normalFormDRepresentationLength;
    unsigned long long _normalFormKCRepresentationLength;
    int *_originalRepresentation;
    int *_normalFormDRepresentation;
    int *_normalFormKCRepresentation;
    long long _originalCombinedCharacterLength;
    struct __CFString { } *_originalCombinedCharacter;
}

- (void)dealloc;
- (unsigned long long)originalLength;
- (struct __CFString { } *)originalString;
- (unsigned long long)length;
- (BOOL)isEqual:(id)a0;
- (int)charAtIndex:(unsigned long long)a0;
- (id)initWithCharacter:(int)a0;
- (BOOL)containsUpperCase;
- (struct __CFString { } *)copyUnicodeDescriptionString;
- (unsigned long long)formDLength;
- (unsigned long long)formKCLength;
- (id)initWithComposedCharacter:(struct __CFString { } *)a0;
- (BOOL)isEqualToUChar32:(int)a0;
- (void)_buildFormD;
- (void)_buildFormKC;
- (BOOL)_formKCContaintsUpperCase;
- (id)_initWithCharacter:(int)a0;
- (id)_initWithComposedCharacter:(struct __CFString { } *)a0;
- (id)_initWithSimpleCharacter:(int)a0;
- (int)formDCharAtIndex:(unsigned long long)a0;
- (int)formKCCharAtIndex:(unsigned long long)a0;
- (int)originalFromCharAtIndex:(unsigned long long)a0;

@end
