@class NSString, NSData;

@interface SGDCKLocation : PBCodable <NSCopying> {
    struct { unsigned char accuracy : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char quality : 1; unsigned char locationType : 1; } _has;
}

@property (nonatomic) char hasLocationType;
@property (nonatomic) int locationType;
@property (readonly, nonatomic) char hasLabel;
@property (retain, nonatomic) NSString *label;
@property (readonly, nonatomic) char hasAddress;
@property (retain, nonatomic) NSString *address;
@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasAccuracy;
@property (nonatomic) double accuracy;
@property (nonatomic) char hasQuality;
@property (nonatomic) double quality;
@property (readonly, nonatomic) char hasHandle;
@property (retain, nonatomic) NSData *handle;
@property (readonly, nonatomic) char hasAirportCode;
@property (retain, nonatomic) NSString *airportCode;

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
- (int)StringAsLocationType:(id)a0;
- (id)locationTypeAsString:(int)a0;

@end
