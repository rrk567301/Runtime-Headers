@class NSString;

@interface HDCodableWorkoutConfiguration : PBCodable <NSCopying> {
    struct { unsigned char activityType : 1; unsigned char locationType : 1; unsigned char wLengthValue : 1; unsigned char wLocationType : 1; } _has;
}

@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) long long activityType;
@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) long long locationType;
@property (nonatomic) BOOL hasWLocationType;
@property (nonatomic) long long wLocationType;
@property (nonatomic) BOOL hasWLengthValue;
@property (nonatomic) double wLengthValue;
@property (readonly, nonatomic) BOOL hasWLengthUnitString;
@property (retain, nonatomic) NSString *wLengthUnitString;

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
