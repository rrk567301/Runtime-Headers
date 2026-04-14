@class NSString;

@interface CLPLocationConsumptionScoreInfo : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) double stopTime;
@property (readonly, nonatomic) BOOL hasClientKey;
@property (retain, nonatomic) NSString *clientKey;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) int score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
