@class NSArray, FLOWSchemaFLOWEntityTier1, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *entitiesPresenteds;
@property (retain, nonatomic) FLOWSchemaFLOWEntityTier1 *entitySelected;
@property (nonatomic) BOOL hasEntitySelected;
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
- (void)addEntitiesPresented:(id)a0;
- (void)clearEntitiesPresented;
- (void)deleteEntitiesPresented;
- (void)deleteEntitySelected;
- (void)deleteLinkId;
- (id)entitiesPresentedAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesPresentedCount;

@end
