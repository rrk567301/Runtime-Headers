@class GEOVehicleSpecifications, PBDataReader, GEOUserPreferences, PBUnknownFields;

@interface GEOAutomobileOptions : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOUserPreferences *_userPreferences;
    GEOVehicleSpecifications *_vehicleSpecifications;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _trafficType;
    char _includeHistoricTravelTime;
    char _includeStaticTravelTime;
    struct { unsigned char has_trafficType : 1; unsigned char has_includeHistoricTravelTime : 1; unsigned char has_includeStaticTravelTime : 1; unsigned char read_unknownFields : 1; unsigned char read_userPreferences : 1; unsigned char read_vehicleSpecifications : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasIncludeHistoricTravelTime;
@property (nonatomic) char includeHistoricTravelTime;
@property (nonatomic) char hasTrafficType;
@property (nonatomic) int trafficType;
@property (nonatomic) char hasIncludeStaticTravelTime;
@property (nonatomic) char includeStaticTravelTime;
@property (readonly, nonatomic) char hasUserPreferences;
@property (retain, nonatomic) GEOUserPreferences *userPreferences;
@property (readonly, nonatomic) char hasVehicleSpecifications;
@property (retain, nonatomic) GEOVehicleSpecifications *vehicleSpecifications;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsTrafficType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)trafficTypeAsString:(int)a0;

@end
