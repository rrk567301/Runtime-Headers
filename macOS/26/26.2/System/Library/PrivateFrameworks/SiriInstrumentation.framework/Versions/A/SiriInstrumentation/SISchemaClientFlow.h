@class NSString, NSData;

@interface SISchemaClientFlow : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *clientFlowPayload;
@property (nonatomic) BOOL hasClientFlowPayload;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteClientFlowPayload;

@end
