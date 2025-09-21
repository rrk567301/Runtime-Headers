@interface CKDPThrottlingConfigRateLimit : PBCodable <NSCopying> {
    struct { unsigned char startTimeSecondsAfterLocalMidnight : 1; unsigned char startTimeSecondsAfterUnixEpoch : 1; unsigned char allowedRequestCount : 1; unsigned char intervalLengthSec : 1; unsigned char repeatEverySec : 1; } _has;
}

@property (nonatomic) char hasIntervalLengthSec;
@property (nonatomic) int intervalLengthSec;
@property (nonatomic) char hasAllowedRequestCount;
@property (nonatomic) int allowedRequestCount;
@property (nonatomic) char hasRepeatEverySec;
@property (nonatomic) int repeatEverySec;
@property (nonatomic) char hasStartTimeSecondsAfterUnixEpoch;
@property (nonatomic) long long startTimeSecondsAfterUnixEpoch;
@property (nonatomic) char hasStartTimeSecondsAfterLocalMidnight;
@property (nonatomic) long long startTimeSecondsAfterLocalMidnight;

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
