@class NSString, NSData;

@interface SISchemaClientFlow : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *clientFlowPayload;
@property (nonatomic) BOOL hasClientFlowPayload;
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
- (void)deleteClientFlowPayload;

@end
