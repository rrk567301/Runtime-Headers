@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventRideBookedSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_intentResponseFailures;
    NSString *_rideAppId;
    NSString *_rideAppVersion;
    NSString *_rideBookedSessionId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _statusIssue;
    char _bookedUsingMaps;
    char _cancelled;
    char _contactedDriver;
    char _invalidVehicleLocation;
    char _missingVehicleLocation;
    char _tappedProactiveTrayItem;
    char _viewedDetails;
    char _viewedInProactiveTray;
    struct { unsigned char has_statusIssue : 1; unsigned char has_bookedUsingMaps : 1; unsigned char has_cancelled : 1; unsigned char has_contactedDriver : 1; unsigned char has_invalidVehicleLocation : 1; unsigned char has_missingVehicleLocation : 1; unsigned char has_tappedProactiveTrayItem : 1; unsigned char has_viewedDetails : 1; unsigned char has_viewedInProactiveTray : 1; unsigned char read_intentResponseFailures : 1; unsigned char read_rideAppId : 1; unsigned char read_rideAppVersion : 1; unsigned char read_rideBookedSessionId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasBookedUsingMaps;
@property (nonatomic) char bookedUsingMaps;
@property (nonatomic) char hasCancelled;
@property (nonatomic) char cancelled;
@property (nonatomic) char hasContactedDriver;
@property (nonatomic) char contactedDriver;
@property (nonatomic) char hasViewedInProactiveTray;
@property (nonatomic) char viewedInProactiveTray;
@property (nonatomic) char hasTappedProactiveTrayItem;
@property (nonatomic) char tappedProactiveTrayItem;
@property (nonatomic) char hasViewedDetails;
@property (nonatomic) char viewedDetails;
@property (readonly, nonatomic) char hasRideAppId;
@property (retain, nonatomic) NSString *rideAppId;
@property (readonly, nonatomic) char hasRideBookedSessionId;
@property (retain, nonatomic) NSString *rideBookedSessionId;
@property (readonly, nonatomic) char hasRideAppVersion;
@property (retain, nonatomic) NSString *rideAppVersion;
@property (nonatomic) char hasInvalidVehicleLocation;
@property (nonatomic) char invalidVehicleLocation;
@property (nonatomic) char hasMissingVehicleLocation;
@property (nonatomic) char missingVehicleLocation;
@property (nonatomic) char hasStatusIssue;
@property (nonatomic) int statusIssue;
@property (retain, nonatomic) NSMutableArray *intentResponseFailures;

+ (Class)intentResponseFailureType;
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
- (int)StringAsStatusIssue:(id)a0;
- (void)addIntentResponseFailure:(id)a0;
- (void)clearIntentResponseFailures;
- (id)initWithJSON:(id)a0;
- (id)intentResponseFailureAtIndex:(unsigned long long)a0;
- (unsigned long long)intentResponseFailuresCount;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)statusIssueAsString:(int)a0;

@end
