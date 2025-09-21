@class NSString, NSData, SISchemaUUID;

@interface TTSSchemaTTSRequestReceivedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *textToSynthesize;
@property (nonatomic) char hasTextToSynthesize;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) char hasLinkId;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) char hasContextId;
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
- (void)deleteContextId;
- (void)deleteLinkId;
- (void)deleteTextToSynthesize;
- (id)suppressMessageUnderConditions;

@end
