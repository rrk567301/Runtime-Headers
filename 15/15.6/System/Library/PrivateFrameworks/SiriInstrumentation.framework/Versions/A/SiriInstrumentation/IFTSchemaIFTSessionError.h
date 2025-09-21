@class IFTSchemaIFTIntelligenceFlowError, IFTSchemaIFTPlannerError, NSData, IFTSchemaIFTSessionCoordinatorError, IFTSchemaIFTExecutorError;

@interface IFTSchemaIFTSessionError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) char hasOther;
@property (retain, nonatomic) IFTSchemaIFTSessionCoordinatorError *sessionCoordinatorError;
@property (nonatomic) char hasSessionCoordinatorError;
@property (retain, nonatomic) IFTSchemaIFTPlannerError *plannerError;
@property (nonatomic) char hasPlannerError;
@property (retain, nonatomic) IFTSchemaIFTExecutorError *executorError;
@property (nonatomic) char hasExecutorError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Sessionerror;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteExecutorError;
- (void)deleteOther;
- (void)deletePlannerError;
- (void)deleteSessionCoordinatorError;
- (id)suppressMessageUnderConditions;

@end
