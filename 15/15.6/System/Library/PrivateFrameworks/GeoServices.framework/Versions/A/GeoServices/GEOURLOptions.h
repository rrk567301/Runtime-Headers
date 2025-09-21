@class NSString, GEOURLRouteHandle, GEOURLCamera, GEOURLCenterSpan, GEOURLTimePoint, PBDataReader;

@interface GEOURLOptions : PBCodable <GEOURLSerializable, NSCopying> {
    PBDataReader *_reader;
    GEOURLCamera *_camera;
    GEOURLCenterSpan *_centerSpan;
    NSString *_referralIdentifier;
    GEOURLRouteHandle *_routeHandle;
    GEOURLTimePoint *_timePoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _mapType;
    int _transportType;
    int _userTrackingMode;
    char _connectedToCar;
    char _enableTraffic;
    char _ignoreLabelPreference;
    char _pitchedWhileTracking;
    struct { unsigned char has_mapType : 1; unsigned char has_transportType : 1; unsigned char has_userTrackingMode : 1; unsigned char has_connectedToCar : 1; unsigned char has_enableTraffic : 1; unsigned char has_ignoreLabelPreference : 1; unsigned char has_pitchedWhileTracking : 1; unsigned char read_camera : 1; unsigned char read_centerSpan : 1; unsigned char read_referralIdentifier : 1; unsigned char read_routeHandle : 1; unsigned char read_timePoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasEnableTraffic;
@property (nonatomic) char enableTraffic;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (nonatomic) char hasTransportType;
@property (nonatomic) int transportType;
@property (readonly, nonatomic) char hasCenterSpan;
@property (retain, nonatomic) GEOURLCenterSpan *centerSpan;
@property (readonly, nonatomic) char hasCamera;
@property (retain, nonatomic) GEOURLCamera *camera;
@property (readonly, nonatomic) char hasReferralIdentifier;
@property (retain, nonatomic) NSString *referralIdentifier;
@property (nonatomic) char hasUserTrackingMode;
@property (nonatomic) int userTrackingMode;
@property (readonly, nonatomic) char hasRouteHandle;
@property (retain, nonatomic) GEOURLRouteHandle *routeHandle;
@property (readonly, nonatomic) char hasTimePoint;
@property (retain, nonatomic) GEOURLTimePoint *timePoint;
@property (nonatomic) char hasConnectedToCar;
@property (nonatomic) char connectedToCar;
@property (nonatomic) char hasPitchedWhileTracking;
@property (nonatomic) char pitchedWhileTracking;
@property (nonatomic) char hasIgnoreLabelPreference;
@property (nonatomic) char ignoreLabelPreference;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
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
- (int)StringAsTransportType:(id)a0;
- (int)StringAsMapType:(id)a0;
- (int)StringAsUserTrackingMode:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithUrlRepresentation:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(char)a0;
- (id)transportTypeAsString:(int)a0;
- (id)urlRepresentation;
- (id)userTrackingModeAsString:(int)a0;

@end
