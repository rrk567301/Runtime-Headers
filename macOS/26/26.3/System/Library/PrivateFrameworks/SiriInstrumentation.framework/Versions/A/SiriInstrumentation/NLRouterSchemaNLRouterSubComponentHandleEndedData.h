@class NLRouterSchemaHeuristicsHandleEndedData, NSData;

@interface NLRouterSchemaNLRouterSubComponentHandleEndedData : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLRouterSchemaHeuristicsHandleEndedData *heuristicsHandleEndedData;
@property (nonatomic) BOOL hasHeuristicsHandleEndedData;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteHeuristicsHandleEndedData;

@end
