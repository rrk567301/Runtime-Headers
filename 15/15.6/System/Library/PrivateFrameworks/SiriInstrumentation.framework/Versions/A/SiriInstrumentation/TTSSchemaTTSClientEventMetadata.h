@class NSString, NSData, SISchemaUUID;

@interface TTSSchemaTTSClientEventMetadata : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *ttsId;
@property (nonatomic) char hasTtsId;
@property (retain, nonatomic) SISchemaUUID *requestId;
@property (nonatomic) char hasRequestId;
@property (copy, nonatomic) NSString *clientId;
@property (nonatomic) char hasClientId;
@property (retain, nonatomic) SISchemaUUID *subRequestId;
@property (nonatomic) char hasSubRequestId;
@property (retain, nonatomic) SISchemaUUID *aceViewId;
@property (nonatomic) char hasAceViewId;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAceViewId;
- (void)deleteRequestId;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteClientId;
- (void)deleteSubRequestId;
- (void)deleteTtsId;
- (id)suppressMessageUnderConditions;

@end
