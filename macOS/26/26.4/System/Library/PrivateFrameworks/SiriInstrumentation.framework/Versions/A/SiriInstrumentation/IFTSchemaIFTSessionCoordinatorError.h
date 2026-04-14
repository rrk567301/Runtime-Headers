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
- (void)deleteFailedToConvertClientEvent;
- (void)deleteFailedToWriteTranscript;
- (void)deleteOther;

@end
