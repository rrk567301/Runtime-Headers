@class NSData;

@interface IHSchemaIHScore : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char upperBoundary : 1; unsigned char lowerBoundary : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) char hasScore;
@property (nonatomic) float upperBoundary;
@property (nonatomic) char hasUpperBoundary;
@property (nonatomic) float lowerBoundary;
@property (nonatomic) char hasLowerBoundary;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteLowerBoundary;
- (void)deleteScore;
- (void)deleteUpperBoundary;
- (id)suppressMessageUnderConditions;

@end
