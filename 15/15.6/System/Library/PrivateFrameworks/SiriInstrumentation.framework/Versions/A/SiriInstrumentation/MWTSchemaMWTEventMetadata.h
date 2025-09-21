@class NSData, SISchemaUUID;

@interface MWTSchemaMWTEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *mwtId;
@property (nonatomic) char hasMwtId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMwtId;
- (void)deleteSubRequestId;
- (id)suppressMessageUnderConditions;

@end
