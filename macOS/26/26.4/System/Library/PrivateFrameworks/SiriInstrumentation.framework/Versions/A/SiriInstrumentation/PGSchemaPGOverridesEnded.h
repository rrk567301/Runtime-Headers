@class NSString, NSData, PGSchemaPGOverridesMatchMetadata, SISchemaUUID;

@interface PGSchemaPGOverridesEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *transcriptEventId;
@property (nonatomic) BOOL hasTranscriptEventId;
@property (retain, nonatomic) PGSchemaPGOverridesMatchMetadata *overridesMatched;
@property (nonatomic) BOOL hasOverridesMatched;
@property (copy, nonatomic) NSString *assetVersion;
@property (nonatomic) BOOL hasAssetVersion;
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
- (void)deleteAssetVersion;
- (void)deleteOverridesMatched;
- (void)deleteTranscriptEventId;

@end
