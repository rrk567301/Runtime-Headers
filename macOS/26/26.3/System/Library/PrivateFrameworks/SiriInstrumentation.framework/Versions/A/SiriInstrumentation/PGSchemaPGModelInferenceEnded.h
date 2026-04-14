@class NSString, NSData, SISchemaUUID;

@interface PGSchemaPGModelInferenceEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (nonatomic) BOOL hasModelIdentifier;
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
- (void)deleteLinkId;
- (void)deleteModelIdentifier;
- (void)deleteTranscriptEventId;

@end
