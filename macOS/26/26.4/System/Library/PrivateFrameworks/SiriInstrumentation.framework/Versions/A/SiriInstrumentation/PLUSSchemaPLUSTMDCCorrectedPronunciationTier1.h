@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *firstNamePhonemes;
@property (nonatomic) BOOL hasFirstNamePhonemes;
@property (copy, nonatomic) NSString *lastNamePhonemes;
@property (nonatomic) BOOL hasLastNamePhonemes;
@property (copy, nonatomic) NSString *nicknamePhonemes;
@property (nonatomic) BOOL hasNicknamePhonemes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteFirstNamePhonemes;
- (void)deleteLastNamePhonemes;
- (void)deleteNicknamePhonemes;

@end
