@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelProfileRebuildStarted : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *appBundleId;
@property (nonatomic) char hasAppBundleId;
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
- (id)suppressMessageUnderConditions;

@end
