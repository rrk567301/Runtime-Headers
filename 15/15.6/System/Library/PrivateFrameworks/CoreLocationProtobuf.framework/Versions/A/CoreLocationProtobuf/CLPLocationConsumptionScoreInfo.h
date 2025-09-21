@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasStopTime;
@property (nonatomic) double stopTime;
@property (readonly, nonatomic) char hasClientKey;
@property (retain, nonatomic) NSString *clientKey;
@property (nonatomic) char hasScore;
@property (nonatomic) int score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
