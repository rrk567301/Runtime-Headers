@class NSString, NSData, SISchemaUUID;

@interface TTSSchemaTTSClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ttsId;
@property (nonatomic) BOOL hasTtsId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (copy, nonatomic) NSString *clientId;
@property (nonatomic) BOOL hasClientId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) BOOL hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *aceViewId;
@property (nonatomic) BOOL hasAceViewId;
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
- (void)deleteAceViewId;
- (void)deleteRequestId;
- (void)deleteClientId;
- (void)deleteSubRequestId;
- (void)deleteTtsId;

@end
