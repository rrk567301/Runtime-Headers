@class NSString, NSArray, NSData;

@interface NLXSchemaSSUBackgroundUpdateEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *modelEncoderLocale;
@property (nonatomic) BOOL hasModelEncoderLocale;
@property (copy, nonatomic) NSArray *appInfos;
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
- (id)appInfoAtIndex:(unsigned long long)a0;
- (void)addAppInfo:(id)a0;
- (unsigned long long)appInfoCount;
- (void)clearAppInfo;
- (void)deleteAppInfo;
- (void)deleteModelEncoderLocale;

@end
