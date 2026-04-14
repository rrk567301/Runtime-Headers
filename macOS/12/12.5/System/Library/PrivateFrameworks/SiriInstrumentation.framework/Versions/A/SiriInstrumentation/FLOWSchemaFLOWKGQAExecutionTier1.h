@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWKGQAExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *primaryEntities;
@property (copy, nonatomic) NSArray *secondaryEntities;
@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) BOOL hasAnswerId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)clearPrimaryEntities;
- (void)clearSecondaryEntities;
- (void)addPrimaryEntities:(id)a0;
- (void)addSecondaryEntities:(id)a0;
- (void)deletePrimaryEntities;
- (unsigned long long)primaryEntitiesCount;
- (id)primaryEntitiesAtIndex:(unsigned long long)a0;
- (void)deleteSecondaryEntities;
- (unsigned long long)secondaryEntitiesCount;
- (id)secondaryEntitiesAtIndex:(unsigned long long)a0;
- (void)deleteAnswerId;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
