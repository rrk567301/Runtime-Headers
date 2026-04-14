@class NSString, NSData, PGSchemaPGOverridesMatchMetadata, SISchemaUUID;

@interface PGSchemaPGOverridesEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
@property (retain, nonatomic) PGSchemaPGOverridesMatchMetadata *overridesMatched;
@property (nonatomic) BOOL hasOverridesMatched;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
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
- (void)deleteAssetVersion;
- (void)deleteOverridesMatched;
- (void)deleteTranscriptEventId;

@end
