@class NLXSchemaMARRSQueryRewriteFailed, NLXSchemaMARRSQueryRewriteEvaluated, NSData, NLXSchemaMARRSQueryRewriteStarted;

@interface NLXSchemaMARRSQueryRewriteContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *started;
@property (nonatomic) char hasStarted;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *evaluated;
@property (nonatomic) char hasEvaluated;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteFailed *failed;
@property (nonatomic) char hasFailed;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteStarted *startedOrChanged;
@property (nonatomic) char hasStartedOrChanged;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluated *ended;
@property (nonatomic) char hasEnded;
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
- (void)deleteEvaluated;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteEnded;
- (void)deleteFailed;
- (void)deleteStarted;
- (void)deleteStartedOrChanged;
- (id)suppressMessageUnderConditions;

@end
