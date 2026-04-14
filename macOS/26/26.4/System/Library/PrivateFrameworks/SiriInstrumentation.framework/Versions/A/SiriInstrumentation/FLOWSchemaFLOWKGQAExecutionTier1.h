@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWKGQAExecutionTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *primaryEntities;
@property (copy, nonatomic) NSArray *secondaryEntities;
@property (copy, nonatomic) NSString *answerId;
@property (nonatomic) BOOL hasAnswerId;
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
- (void)addPrimaryEntities:(id)a0;
- (void)addSecondaryEntities:(id)a0;
- (void)clearPrimaryEntities;
- (void)clearSecondaryEntities;
- (void)deleteAnswerId;
- (void)deletePrimaryEntities;
- (void)deleteSecondaryEntities;
- (id)primaryEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)primaryEntitiesCount;
- (id)secondaryEntitiesAtIndex:(unsigned long long)a0;
- (unsigned long long)secondaryEntitiesCount;

@end
