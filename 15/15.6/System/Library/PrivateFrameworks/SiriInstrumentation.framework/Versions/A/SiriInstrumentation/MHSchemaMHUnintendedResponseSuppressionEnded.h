@class NSString, NSData;

@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char threshold : 1; unsigned char speakerIDThreshold : 1; unsigned char speakerIdScoreThreshold : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) char hasModelVersion;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) char hasThreshold;
@property (copy, nonatomic) NSString *mitigationAssetVersion;
@property (nonatomic) char hasMitigationAssetVersion;
@property (nonatomic) float speakerIDThreshold;
@property (nonatomic) char hasSpeakerIDThreshold;
@property (nonatomic) float speakerIdScoreThreshold;
@property (nonatomic) char hasSpeakerIdScoreThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteThreshold;
- (void)deleteMitigationAssetVersion;
- (void)deleteModelVersion;
- (void)deleteScore;
- (void)deleteSpeakerIDThreshold;
- (void)deleteSpeakerIdScoreThreshold;
- (id)suppressMessageUnderConditions;

@end
