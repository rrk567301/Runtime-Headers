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
- (void)deleteMode;
- (void)deleteNeuralCombinerScore;
- (void)deleteRecommendation;
- (void)deleteTcuId;

@end
