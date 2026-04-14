@class NSData, SISchemaUUID;

@interface SKIMMERSchemaSKIMMERClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *skimmerId;
@property (nonatomic) BOOL hasSkimmerId;
@property (retain, nonatomic) SISchemaUUID *ifRequestId;
@property (nonatomic) BOOL hasIfRequestId;
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
- (void)deleteSkimmerId;
- (void)deleteIfRequestId;

@end
