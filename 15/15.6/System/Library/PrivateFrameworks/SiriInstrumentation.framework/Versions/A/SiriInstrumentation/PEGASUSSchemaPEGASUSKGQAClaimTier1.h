@class NSString, NSArray, NSData;

@interface PEGASUSSchemaPEGASUSKGQAClaimTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *entityId;
@property (nonatomic) char hasEntityId;
@property (copy, nonatomic) NSString *propId;
@property (nonatomic) char hasPropId;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) char hasValue;
@property (copy, nonatomic) NSArray *qualifiers;
@property (copy, nonatomic) NSArray *references;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (unsigned long long)referencesCount;
- (void)clearReferences;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)clearQualifiers;
- (unsigned long long)qualifiersCount;
- (void)addQualifiers:(id)a0;
- (void)addReferences:(id)a0;
- (void)deleteEntityId;
- (void)deletePropId;
- (void)deleteQualifiers;
- (void)deleteReferences;
- (void)deleteValue;
- (id)qualifiersAtIndex:(unsigned long long)a0;
- (id)referencesAtIndex:(unsigned long long)a0;
- (id)suppressMessageUnderConditions;

@end
