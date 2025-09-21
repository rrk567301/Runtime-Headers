@class NSString, NSData;

@interface MHSchemaMHVoiceTriggerFirstPassDailyMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char hardwareSampleRate : 1; } _has;
}

@property (copy, nonatomic) NSString *configVersion;
@property (nonatomic) char hasConfigVersion;
@property (nonatomic) int hardwareSampleRate;
@property (nonatomic) char hasHardwareSampleRate;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) char hasMitigationAssetVersion;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteConfigVersion;
- (void)deleteHardwareSampleRate;
- (void)deleteMitigationAssetVersion;
- (id)suppressMessageUnderConditions;

@end
