@interface CLPIndoorCMPedometer : PBCodable <NSCopying> {
    struct { unsigned char firstStepTime : 1; unsigned char timestamp : 1; unsigned char activeTime : 1; unsigned char distance : 1; unsigned char floorsAscended : 1; unsigned char floorsDescended : 1; unsigned char numberOfSteps : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasDistance;
@property (nonatomic) float distance;
@property (nonatomic) char hasNumberOfSteps;
@property (nonatomic) int numberOfSteps;
@property (nonatomic) char hasFloorsAscended;
@property (nonatomic) int floorsAscended;
@property (nonatomic) char hasFloorsDescended;
@property (nonatomic) int floorsDescended;
@property (nonatomic) char hasFirstStepTime;
@property (nonatomic) double firstStepTime;
@property (nonatomic) char hasActiveTime;
@property (nonatomic) float activeTime;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
