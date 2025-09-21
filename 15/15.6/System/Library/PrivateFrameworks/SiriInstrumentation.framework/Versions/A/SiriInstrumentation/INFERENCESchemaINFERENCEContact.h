@class NSString, NSArray, NSData;

@interface INFERENCESchemaINFERENCEContact : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *anonymizedContactIdentifier;
@property (nonatomic) char hasAnonymizedContactIdentifier;
@property (copy, nonatomic) NSArray *anonymizedHandleValues;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)addAnonymizedHandleValues:(id)a0;
- (id)anonymizedHandleValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedHandleValuesCount;
- (void)clearAnonymizedHandleValues;
- (void)deleteAnonymizedContactIdentifier;
- (void)deleteAnonymizedHandleValues;
- (id)suppressMessageUnderConditions;

@end
