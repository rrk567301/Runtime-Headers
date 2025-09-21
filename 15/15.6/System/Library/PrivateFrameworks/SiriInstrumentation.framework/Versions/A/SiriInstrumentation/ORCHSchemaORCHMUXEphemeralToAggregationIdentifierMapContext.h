@class ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMap, NSData;

@interface ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMapContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHMUXEphemeralToAggregationIdentifierMap *selectedUser;
@property (nonatomic) char hasSelectedUser;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteSelectedUser;
- (id)suppressMessageUnderConditions;

@end
