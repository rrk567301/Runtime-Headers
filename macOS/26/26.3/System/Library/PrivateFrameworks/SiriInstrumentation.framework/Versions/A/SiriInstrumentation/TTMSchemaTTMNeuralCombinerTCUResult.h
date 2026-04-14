@class NSData, SISchemaUUID;

@interface TTMSchemaTTMNeuralCombinerTCUResult : SISchemaInstrumentationMessage {
    struct { unsigned char neuralCombinerScore : 1; unsigned char recommendation : 1; unsigned char mode : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *tcuId;
@property (nonatomic) BOOL hasTcuId;
@property (nonatomic) float neuralCombinerScore;
@property (nonatomic) BOOL hasNeuralCombinerScore;
@property (nonatomic) int recommendation;
@property (nonatomic) BOOL hasRecommendation;
@property (nonatomic) int mode;
@property (nonatomic) BOOL hasMode;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteMode;
- (void)deleteNeuralCombinerScore;
- (void)deleteRecommendation;
- (void)deleteTcuId;

@end
