@class NSArray, NSString, NSData, _SFPBColor;

@interface _SFPBStrokeAnimationCardSection : PBCodable <_SFPBStrokeAnimationCardSection, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *punchoutOptions;
@property (copy, nonatomic) NSString *punchoutPickerTitle;
@property (copy, nonatomic) NSString *punchoutPickerDismissText;
@property (nonatomic) char canBeHidden;
@property (nonatomic) char hasTopPadding;
@property (nonatomic) char hasBottomPadding;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) int separatorStyle;
@property (retain, nonatomic) _SFPBColor *backgroundColor;
@property (copy, nonatomic) NSString *strokeAnimationRepresentation;
@property (copy, nonatomic) NSArray *strokeNames;
@property (copy, nonatomic) NSArray *characters;
@property (copy, nonatomic) NSArray *pronunciations;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithFacade:(id)a0;
- (void)clearCharacters;
- (void)addStrokeNames:(id)a0;
- (unsigned long long)charactersCount;
- (void)addCharacters:(id)a0;
- (void)addPronunciations:(id)a0;
- (void)addPunchoutOptions:(id)a0;
- (id)charactersAtIndex:(unsigned long long)a0;
- (void)clearPronunciations;
- (void)clearPunchoutOptions;
- (void)clearStrokeNames;
- (id)pronunciationsAtIndex:(unsigned long long)a0;
- (unsigned long long)pronunciationsCount;
- (id)punchoutOptionsAtIndex:(unsigned long long)a0;
- (unsigned long long)punchoutOptionsCount;
- (id)strokeNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)strokeNamesCount;

@end
