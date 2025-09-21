@class NSString, NSData, NSMutableArray;

@interface HDCodableRoutineLocation : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char latitude : 1; unsigned char longitude : 1; unsigned char uncertainty : 1; unsigned char locationOfInterestType : 1; } _has;
}

@property (nonatomic) char hasLatitude;
@property (nonatomic) double latitude;
@property (nonatomic) char hasLongitude;
@property (nonatomic) double longitude;
@property (nonatomic) char hasUncertainty;
@property (nonatomic) double uncertainty;
@property (nonatomic) char hasConfidence;
@property (nonatomic) double confidence;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) char hasLocationOfInterestType;
@property (nonatomic) int locationOfInterestType;
@property (readonly, nonatomic) char hasGeoData;
@property (retain, nonatomic) NSData *geoData;
@property (retain, nonatomic) NSMutableArray *visits;

+ (Class)visitsType;

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
- (void)addVisits:(id)a0;
- (unsigned long long)visitsCount;
- (void)clearVisits;
- (id)visitsAtIndex:(unsigned long long)a0;
- (int)StringAsLocationOfInterestType:(id)a0;
- (id)locationOfInterestTypeAsString:(int)a0;

@end
