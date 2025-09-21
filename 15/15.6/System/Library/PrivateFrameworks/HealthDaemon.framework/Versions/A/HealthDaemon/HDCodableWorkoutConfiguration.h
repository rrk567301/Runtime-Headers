@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {
    struct { unsigned char activityType : 1; unsigned char locationType : 1; unsigned char wLengthValue : 1; unsigned char wLocationType : 1; } _has;
}

@property (nonatomic) char hasActivityType;
@property (nonatomic) long long activityType;
@property (nonatomic) char hasLocationType;
@property (nonatomic) long long locationType;
@property (nonatomic) char hasWLocationType;
@property (nonatomic) long long wLocationType;
@property (nonatomic) char hasWLengthValue;
@property (nonatomic) double wLengthValue;
@property (readonly, nonatomic) char hasWLengthUnitString;
@property (retain, nonatomic) NSString *wLengthUnitString;

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
