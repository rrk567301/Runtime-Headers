@class NSData, SISchemaUUID;

@interface SCSchemaSCClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *scId;
@property (nonatomic) BOOL hasScId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteScId;
- (id)suppressMessageUnderConditions;

@end
