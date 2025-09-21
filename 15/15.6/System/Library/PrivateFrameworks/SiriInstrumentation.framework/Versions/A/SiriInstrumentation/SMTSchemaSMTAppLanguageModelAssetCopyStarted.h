@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelAssetCopyStarted : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) char hasLocale;
@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasAppBundleId;
@property (copy, nonatomic) NSString *appAssetPath;
@property (nonatomic) char hasAppAssetPath;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAppAssetPath;
- (void)deleteAppBundleId;
- (void)deleteLocale;
- (id)suppressMessageUnderConditions;

@end
