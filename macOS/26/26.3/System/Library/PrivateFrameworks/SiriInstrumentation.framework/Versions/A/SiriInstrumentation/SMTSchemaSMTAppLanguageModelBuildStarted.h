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

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteAppBundleId;
- (void)deleteArtifactSizeInBytes;
- (void)deleteLocale;

@end
