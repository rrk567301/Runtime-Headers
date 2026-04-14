@class NSArray, FLOWSchemaFLOWEntityTier1, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *entitiesPresenteds;
@property (retain, nonatomic) FLOWSchemaFLOWEntityTier1 *entitySelected;
@property (nonatomic) BOOL hasEntitySelected;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLinkId;
- (void)clearEntitiesPresented;
- (void)addEntitiesPresented:(id)a0;
- (void)deleteEntitiesPresented;
- (unsigned long long)entitiesPresentedCount;
- (id)entitiesPresentedAtIndex:(unsigned long long)a0;
- (void)deleteEntitySelected;
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;

@end
