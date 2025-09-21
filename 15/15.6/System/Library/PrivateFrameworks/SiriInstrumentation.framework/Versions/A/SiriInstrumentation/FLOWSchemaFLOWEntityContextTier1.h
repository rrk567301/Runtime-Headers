@class NSArray, FLOWSchemaFLOWEntityTier1, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (copy, nonatomic) NSArray *entitiesPresenteds;
@property (retain, nonatomic) FLOWSchemaFLOWEntityTier1 *entitySelected;
@property (nonatomic) char hasEntitySelected;
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
- (void)addEntitiesPresented:(id)a0;
- (void)clearEntitiesPresented;
- (void)deleteEntitiesPresented;
- (void)deleteEntitySelected;
- (void)deleteLinkId;
- (id)entitiesPresentedAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesPresentedCount;
- (id)suppressMessageUnderConditions;

@end
