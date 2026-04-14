@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildStarted : SISchemaInstrumentationMessage {
    struct { unsigned char artifactSizeInBytes : 1; unsigned char locale : 1; } _has;
}

@property (nonatomic) unsigned long long artifactSizeInBytes;
@property (nonatomic) BOOL hasArtifactSizeInBytes;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppBundleId;
- (void)deleteArtifactSizeInBytes;
- (void)deleteLocale;

@end
