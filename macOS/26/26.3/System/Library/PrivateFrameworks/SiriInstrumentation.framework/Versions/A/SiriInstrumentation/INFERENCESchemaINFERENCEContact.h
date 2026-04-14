@class NSString, NSArray, NSData;

@interface INFERENCESchemaINFERENCEContact : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *anonymizedContactIdentifier;
@property (nonatomic) BOOL hasAnonymizedContactIdentifier;
@property (copy, nonatomic) NSArray *anonymizedHandleValues;
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
- (void)addAnonymizedHandleValues:(id)a0;
- (id)anonymizedHandleValuesAtIndex:(unsigned long long)a0;
- (unsigned long long)anonymizedHandleValuesCount;
- (void)clearAnonymizedHandleValues;
- (void)deleteAnonymizedContactIdentifier;
- (void)deleteAnonymizedHandleValues;

@end
