@class NSString;

@interface BMPBFindMyLocationChangeEvent : PBCodable <NSCopying> {
    struct { unsigned char latitude : 1; unsigned char longitude : 1; unsigned char activityState : 1; unsigned char locationChangeType : 1; } _has;
}

@property (readonly, nonatomic) char hasIdsHandle;
@property (retain, nonatomic) NSString *idsHandle;
@property (nonatomic) char hasLocationChangeType;
@property (nonatomic) int locationChangeType;
@property (nonatomic) char hasActivityState;
@property (nonatomic) int activityState;
@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;

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
- (int)StringAsActivityState:(id)a0;
- (int)StringAsLocationChangeType:(id)a0;
- (id)activityStateAsString:(int)a0;
- (id)locationChangeTypeAsString:(int)a0;

@end
