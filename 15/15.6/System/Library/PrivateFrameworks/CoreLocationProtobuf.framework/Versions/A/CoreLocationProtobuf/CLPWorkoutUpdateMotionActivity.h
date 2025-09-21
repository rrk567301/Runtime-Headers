@interface CLPWorkoutUpdateMotionActivity : PBCodable <NSCopying> {
    struct { unsigned char startTime : 1; unsigned char timestamp : 1; unsigned char activityType : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic) char hasActivityType;
@property (nonatomic) int activityType;

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
