@class NSData, SISchemaUUID;

@interface TTMSchemaTTMNeuralCombinerTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char neuralCombinerScore : 1; unsigned char recommendation : 1; unsigned char mode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) char hasTcuId;
@property (nonatomic) float neuralCombinerScore;
@property (nonatomic) char hasNeuralCombinerScore;
@property (nonatomic) int recommendation;
@property (nonatomic) char hasRecommendation;
@property (nonatomic) int mode;
@property (nonatomic) char hasMode;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (void)deleteMode;
- (void)deleteNeuralCombinerScore;
- (void)deleteRecommendation;
- (void)deleteTcuId;
- (id)suppressMessageUnderConditions;

@end
