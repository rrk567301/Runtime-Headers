@class NLRouterSchemaHeuristicsHandleEndedData, NSData;

@interface NLRouterSchemaNLRouterSubComponentHandleEndedData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLRouterSchemaHeuristicsHandleEndedData *heuristicsHandleEndedData;
@property (nonatomic) char hasHeuristicsHandleEndedData;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteHeuristicsHandleEndedData;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;

@end
