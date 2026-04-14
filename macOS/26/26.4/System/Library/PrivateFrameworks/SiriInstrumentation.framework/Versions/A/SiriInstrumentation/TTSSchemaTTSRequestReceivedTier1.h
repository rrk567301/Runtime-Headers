@class SISchemaFreeFormText, NSString, NSData, SISchemaUUID;

@interface TTSSchemaTTSRequestReceivedTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *textToSynthesize;
@property (nonatomic) BOOL hasTextToSynthesize;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) SISchemaFreeFormText *textToSpeak;
@property (nonatomic) BOOL hasTextToSpeak;
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
- (void)deleteContextId;
- (void)deleteLinkId;
- (void)deleteTextToSpeak;
- (void)deleteTextToSynthesize;

@end
