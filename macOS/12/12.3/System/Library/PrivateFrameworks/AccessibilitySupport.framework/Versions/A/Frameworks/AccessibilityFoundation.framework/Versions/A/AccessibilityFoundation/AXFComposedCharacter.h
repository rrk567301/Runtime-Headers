@class NSString;

@interface AXFComposedCharacter : NSObject

@property (copy, nonatomic) NSString *_originalCombinedCharacter;
@property (nonatomic) unsigned long long _originalCombinedCharacterLength;
@property (nonatomic) int *_original;
@property (nonatomic) unsigned long long _originalLength;
@property (nonatomic) int *_normalizationFormD;
@property (nonatomic) unsigned long long _normalizationFormDLength;
@property (nonatomic) int *_normalizationFormKC;
@property (nonatomic) unsigned long long _normalizationFormKCLength;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCharacter:(int)a0;
- (id)originalString;
- (id)initWithComposedCharacterUnchecked:(id)a0;
- (void)_buildNormalizationFormKCIfNeeded;
- (BOOL)_normalizationFormKCContainsUpperCase;
- (BOOL)_normalizationFormDContainsUpperCase;
- (void)_buildNormalizationFormDIfNeeded;
- (id)initWithComposedCharacter:(id)a0;
- (BOOL)isEqualToUChar32:(int)a0;
- (id)copyUnicodeDescriptionString;
- (id)literalDescription;
- (BOOL)containsUpperCase;
- (unsigned long long)originalLength;
- (int)charAtIndexOfOriginalForm:(unsigned long long)a0;
- (unsigned long long)formKCLength;
- (int)charAtIndexOfFormKC:(unsigned long long)a0;
- (unsigned long long)formDLength;
- (int)charAtIndexOfFormD:(unsigned long long)a0;

@end
