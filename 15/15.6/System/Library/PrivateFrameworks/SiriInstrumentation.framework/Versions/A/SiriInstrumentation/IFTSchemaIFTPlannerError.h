@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTPlannerError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) char hasOther;
@property (nonatomic) char failedToPlan;
@property (nonatomic) char hasFailedToPlan;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *networkError;
@property (nonatomic) char hasNetworkError;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Plannererror;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailedToPlan;
- (void)deleteNetworkError;
- (void)deleteOther;
- (id)suppressMessageUnderConditions;

@end
