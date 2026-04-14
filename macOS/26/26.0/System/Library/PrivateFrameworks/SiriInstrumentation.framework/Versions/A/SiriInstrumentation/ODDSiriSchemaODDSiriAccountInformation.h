@class NSString, NSData;

@interface ODDSiriSchemaODDSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *assistantId;
@property (nonatomic) BOOL hasAssistantId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)deleteAssistantId;

@end
