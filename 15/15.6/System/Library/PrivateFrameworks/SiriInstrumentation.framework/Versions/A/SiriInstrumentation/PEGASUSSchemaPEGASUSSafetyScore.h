@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSSafetyScore : SISchemaInstrumentationMessage {
    struct { unsigned char scoreClass : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) int scoreClass;
@property (nonatomic) char hasScoreClass;
@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (copy, nonatomic) NSString *scoreLabel;
@property (nonatomic) char hasScoreLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteScore;
- (void)deleteScoreClass;
- (void)deleteScoreLabel;
- (id)suppressMessageUnderConditions;

@end
