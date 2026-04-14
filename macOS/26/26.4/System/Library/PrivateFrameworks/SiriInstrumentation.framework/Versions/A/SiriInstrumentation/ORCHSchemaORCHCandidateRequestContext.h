@class ORCHSchemaORCHCandidateRequestCancelled, NSData, ORCHSchemaORCHCandidateRequestStarted;

@interface ORCHSchemaORCHCandidateRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) ORCHSchemaORCHCandidateRequestCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteCancelled;
- (void)deleteStarted;

@end
