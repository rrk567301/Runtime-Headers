@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildStarted : SISchemaInstrumentationMessage {
    struct { unsigned char artifactSizeInBytes : 1; unsigned char locale : 1; } _has;
}

@property (nonatomic) unsigned long long artifactSizeInBytes;
@property (nonatomic) char hasArtifactSizeInBytes;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasAppBundleId;
@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppBundleId;
- (void)deleteArtifactSizeInBytes;
- (void)deleteLocale;
- (id)suppressMessageUnderConditions;

@end
