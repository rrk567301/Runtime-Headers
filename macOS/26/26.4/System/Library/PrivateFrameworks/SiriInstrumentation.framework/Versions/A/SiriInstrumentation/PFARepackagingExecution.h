@class PFAClockEnvelopeStatistics, PFARepackagingExecutionResult, NSData, SISchemaUUID;

@interface PFARepackagingExecution : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *clockIdentifier;
@property (nonatomic) BOOL hasClockIdentifier;
@property (retain, nonatomic) PFAClockEnvelopeStatistics *envelopeStatistics;
@property (nonatomic) BOOL hasEnvelopeStatistics;
@property (retain, nonatomic) PFARepackagingExecutionResult *result;
@property (nonatomic) BOOL hasResult;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteClockIdentifier;
- (void)deleteEnvelopeStatistics;
- (void)deleteResult;

@end
