@class NSString, NSData;

@interface DIMSchemaDIMLocaleNotRecognized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unknownLocale;
@property (nonatomic) BOOL hasUnknownLocale;
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
- (void)deleteUnknownLocale;

@end
