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
- (void)deleteFailedToPlan;
- (void)deleteNetworkError;
- (void)deleteOther;

@end
