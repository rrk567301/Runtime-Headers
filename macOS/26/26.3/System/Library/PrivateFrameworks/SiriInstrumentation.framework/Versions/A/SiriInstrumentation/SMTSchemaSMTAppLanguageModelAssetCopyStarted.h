@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelAssetCopyStarted : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) BOOL hasAppBundleId;
@property (copy, nonatomic) NSString *appAssetPath;
@property (nonatomic) BOOL hasAppAssetPath;
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
- (void)deleteAppAssetPath;
- (void)deleteAppBundleId;
- (void)deleteLocale;

@end
