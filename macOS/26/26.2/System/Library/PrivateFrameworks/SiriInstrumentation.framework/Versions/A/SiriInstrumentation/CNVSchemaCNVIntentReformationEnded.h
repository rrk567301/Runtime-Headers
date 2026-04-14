@class NSData, USOSchemaUSOGraph;

@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraph *reformedIntent;
@property (nonatomic) BOOL hasReformedIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteReformedIntent;

@end
