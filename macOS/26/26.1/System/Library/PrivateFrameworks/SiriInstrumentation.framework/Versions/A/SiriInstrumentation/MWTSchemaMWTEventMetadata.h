@class NSData, SISchemaUUID;

@interface MWTSchemaMWTEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *mwtId;
@property (nonatomic) BOOL hasMwtId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteRequestId;
- (void)deleteMwtId;
- (void)deleteSubRequestId;

@end
