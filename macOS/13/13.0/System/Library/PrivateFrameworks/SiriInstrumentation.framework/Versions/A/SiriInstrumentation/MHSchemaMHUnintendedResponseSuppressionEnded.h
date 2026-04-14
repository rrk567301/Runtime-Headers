@class NSString, NSData;

@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char threshold : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float threshold;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteModelVersion;
- (void)deleteScore;
- (void)deleteThreshold;

@end
