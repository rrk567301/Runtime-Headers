@class NSData;

@interface IHSchemaIHScore : SISchemaInstrumentationMessage {
    struct { unsigned char score : 1; unsigned char upperBoundary : 1; unsigned char lowerBoundary : 1; } _has;
}

@property (nonatomic) float score;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) float upperBoundary;
@property (nonatomic) BOOL hasUpperBoundary;
@property (nonatomic) float lowerBoundary;
@property (nonatomic) BOOL hasLowerBoundary;
@property (readonly, nonatomic) NSData *jsonData;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)deleteLowerBoundary;
- (void)deleteScore;
- (void)deleteUpperBoundary;

@end
