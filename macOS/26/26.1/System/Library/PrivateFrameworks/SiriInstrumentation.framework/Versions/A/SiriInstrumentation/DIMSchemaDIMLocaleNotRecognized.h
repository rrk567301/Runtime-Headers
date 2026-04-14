@class NSString, NSData;

@interface DIMSchemaDIMLocaleNotRecognized : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *unknownLocale;
@property (nonatomic) BOOL hasUnknownLocale;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)suppressMessageUnderConditions;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)deleteUnknownLocale;

@end
