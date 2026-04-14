@class NSData, SISchemaUUID;

@interface RFSchemaRFClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *turnId;
@property (nonatomic) BOOL hasTurnId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *aceViewId;
@property (nonatomic) BOOL hasAceViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteRequestId;
- (void)deleteAceViewId;
- (void)deleteSubRequestId;
- (void)deleteTurnId;

@end
