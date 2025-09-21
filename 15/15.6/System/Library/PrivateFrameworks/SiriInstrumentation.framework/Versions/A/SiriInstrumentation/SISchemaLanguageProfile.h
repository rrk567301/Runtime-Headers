@class NSData;

@interface SISchemaLanguageProfile : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *l;
@property (nonatomic) char hasL;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteL;
- (id)suppressMessageUnderConditions;

@end
