@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTPlannerError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) BOOL hasOther;
@property (nonatomic) BOOL failedToPlan;
@property (nonatomic) BOOL hasFailedToPlan;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *networkError;
@property (nonatomic) BOOL hasNetworkError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Plannererror;

- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suppressMessageUnderConditions;
- (BOOL)readFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)deleteFailedToPlan;
- (void)deleteNetworkError;
- (void)deleteOther;

@end
