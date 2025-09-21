@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTSessionCoordinatorError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) char hasOther;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *failedToWriteTranscript;
@property (nonatomic) char hasFailedToWriteTranscript;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *failedToConvertClientEvent;
@property (nonatomic) char hasFailedToConvertClientEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Sessioncoordinatorerror;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteFailedToConvertClientEvent;
- (void)deleteFailedToWriteTranscript;
- (void)deleteOther;
- (id)suppressMessageUnderConditions;

@end
