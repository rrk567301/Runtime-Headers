@class IFTSchemaIFTIntelligenceFlowError, NSData;

@interface IFTSchemaIFTSessionCoordinatorError : SISchemaInstrumentationMessage

@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *other;
@property (nonatomic) BOOL hasOther;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *failedToWriteTranscript;
@property (nonatomic) BOOL hasFailedToWriteTranscript;
@property (retain, nonatomic) IFTSchemaIFTIntelligenceFlowError *failedToConvertClientEvent;
@property (nonatomic) BOOL hasFailedToConvertClientEvent;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichOneof_Sessioncoordinatorerror;

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
- (void)deleteFailedToConvertClientEvent;
- (void)deleteFailedToWriteTranscript;
- (void)deleteOther;

@end
