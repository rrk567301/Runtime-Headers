@class NSString, NSData;

@interface PLUSSchemaPLUSTMDCCorrectedPronunciationTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *firstNamePhonemes;
@property (nonatomic) char hasFirstNamePhonemes;
@property (copy, nonatomic) NSString *lastNamePhonemes;
@property (nonatomic) char hasLastNamePhonemes;
@property (copy, nonatomic) NSString *nicknamePhonemes;
@property (nonatomic) char hasNicknamePhonemes;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFirstNamePhonemes;
- (void)deleteLastNamePhonemes;
- (void)deleteNicknamePhonemes;
- (id)suppressMessageUnderConditions;

@end
