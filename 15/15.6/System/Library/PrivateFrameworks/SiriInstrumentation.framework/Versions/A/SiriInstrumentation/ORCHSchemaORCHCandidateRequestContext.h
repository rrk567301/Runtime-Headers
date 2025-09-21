@class ORCHSchemaORCHCandidateRequestCancelled, NSData, ORCHSchemaORCHCandidateRequestStarted;

@interface ORCHSchemaORCHCandidateRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestStarted *started;
@property (nonatomic) char hasStarted;
@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestCancelled *cancelled;
@property (nonatomic) char hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteStarted;
- (id)suppressMessageUnderConditions;

@end
