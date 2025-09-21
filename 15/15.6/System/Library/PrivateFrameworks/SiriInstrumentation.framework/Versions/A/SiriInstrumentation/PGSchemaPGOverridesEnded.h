@class NSString, NSData, PGSchemaPGOverridesMatchMetadata, SISchemaUUID;

@interface PGSchemaPGOverridesEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) char hasTranscriptEventId;
@property (retain, nonatomic) PGSchemaPGOverridesMatchMetadata *overridesMatched;
@property (nonatomic) char hasOverridesMatched;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) char hasAssetVersion;
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
- (void)deleteAssetVersion;
- (void)deleteOverridesMatched;
- (void)deleteTranscriptEventId;
- (id)suppressMessageUnderConditions;

@end
