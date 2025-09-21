@class NSString, NSArray;

@interface MCSyntheticInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *committedText;
@property (readonly, nonatomic) NSString *uncommittedText;
@property (readonly, nonatomic) NSArray *syllables;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) unsigned long long cursorIndex;
@property (nonatomic) char includeSuffixAsSearchString;
@property (nonatomic) char useSubInputsAsSearchString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)externalSuffix:(id)a0;
- (id)initWithCommittedText:(id)a0 syllables:(id)a1;
- (id)initWithCommittedText:(id)a0 syllables:(id)a1 useSubInputsAsSearchString:(char)a2;
- (id)shortDescriptionExcludingSubInputs;
- (int)syllableIndex:(int *)a0;
- (id)syntheticInputWithCommittedText:(id)a0 syllables:(id)a1;
- (id)syntheticInputWithCursorIndex:(unsigned long long)a0;

@end
