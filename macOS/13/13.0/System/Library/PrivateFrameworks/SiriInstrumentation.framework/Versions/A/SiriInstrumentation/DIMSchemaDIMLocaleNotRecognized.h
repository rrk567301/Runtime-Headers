@class NSString, NSData;

@interface DIMSchemaDIMLocaleNotRecognized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unknownLocale;
@property (nonatomic) BOOL hasUnknownLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteUnknownLocale;

@end
