@class PBDataReader, NSString, GEOFormattedString, NSDate, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOPDDeparture : PBCodable <GEOTransitDeparture, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _absDepartureTime;
    double _absLiveDepartureTime;
    NSString *_displayNameOverride;
    GEOFormattedString *_realTimeStatus;
    unsigned long long _referenceTripId;
    NSString *_vehicleNumber;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _realTimeStatusInfo;
    char _isCanceled;
    struct { unsigned char has_absDepartureTime : 1; unsigned char has_absLiveDepartureTime : 1; unsigned char has_referenceTripId : 1; unsigned char has_realTimeStatusInfo : 1; unsigned char has_isCanceled : 1; unsigned char read_unknownFields : 1; unsigned char read_displayNameOverride : 1; unsigned char read_realTimeStatus : 1; unsigned char read_vehicleNumber : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSDate *departureDate;
@property (readonly, nonatomic) NSDate *scheduledDepartureDate;
@property (readonly, nonatomic) NSString *vehicleIdentifier;
@property (readonly, nonatomic) unsigned long long tripIdentifier;
@property (readonly, nonatomic) NSDate *liveDepartureDate;
@property (readonly, nonatomic) long long liveStatus;
@property (readonly, nonatomic) id<GEOServerFormattedString> liveStatusString;
@property (readonly, nonatomic) char isPastDeparture;
@property (readonly, nonatomic) char isCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasAbsDepartureTime;
@property (nonatomic) double absDepartureTime;
@property (readonly, nonatomic) char hasVehicleNumber;
@property (retain, nonatomic) NSString *vehicleNumber;
@property (nonatomic) char hasAbsLiveDepartureTime;
@property (nonatomic) double absLiveDepartureTime;
@property (nonatomic) char hasIsCanceled;
@property (nonatomic) char isCanceled;
@property (nonatomic) char hasReferenceTripId;
@property (nonatomic) unsigned long long referenceTripId;
@property (readonly, nonatomic) char hasRealTimeStatus;
@property (retain, nonatomic) GEOFormattedString *realTimeStatus;
@property (nonatomic) char hasRealTimeStatusInfo;
@property (nonatomic) int realTimeStatusInfo;
@property (readonly, nonatomic) char hasDisplayNameOverride;
@property (retain, nonatomic) NSString *displayNameOverride;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsRealTimeStatusInfo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (char)isPastDepartureRelativeToDate:(id)a0 usingGracePeriod:(char)a1;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)realTimeStatusInfoAsString:(int)a0;

@end
