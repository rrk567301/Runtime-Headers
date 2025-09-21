@class NSData;

@interface POMMESSchemaPOMMESServiceClassifierScoreReported : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char classifierLabel : 1; } _has;
}

@property (nonatomic) double score;
@property (nonatomic) char hasScore;
@property (nonatomic) int classifierLabel;
@property (nonatomic) char hasClassifierLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteClassifierLabel;
- (void)deleteScore;
- (id)suppressMessageUnderConditions;

@end
