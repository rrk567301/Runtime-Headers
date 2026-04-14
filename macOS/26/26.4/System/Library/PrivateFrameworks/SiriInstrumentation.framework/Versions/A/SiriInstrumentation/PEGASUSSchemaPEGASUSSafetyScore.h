@class NSString, NSData;

@interface PEGASUSSchemaPEGASUSSafetyScore : SISchemaInstrumentationMessage {
    struct { unsigned char scoreClass : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) int scoreClass;
@property (nonatomic) BOOL hasScoreClass;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (copy, nonatomic) NSString *scoreLabel;
@property (nonatomic) BOOL hasScoreLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteScore;
- (void)deleteScoreClass;
- (void)deleteScoreLabel;

@end
