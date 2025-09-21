@class NSString;

@interface GEOBookedTable : PBCodable <NSCopying> {
    NSString *_appId;
    unsigned long long _muid;
    char _bookedUsingMaps;
    char _called;
    char _cancelled;
    char _isAsync;
    char _routed;
    char _shared;
    char _tappedCancelReservation;
    char _tappedChangeReservation;
    char _tappedProactiveTrayItem;
    char _viewedDetailsFromPlacecard;
    char _viewedInPlacecard;
    char _viewedInProactiveTray;
    struct { unsigned char has_muid : 1; unsigned char has_bookedUsingMaps : 1; unsigned char has_called : 1; unsigned char has_cancelled : 1; unsigned char has_isAsync : 1; unsigned char has_routed : 1; unsigned char has_shared : 1; unsigned char has_tappedCancelReservation : 1; unsigned char has_tappedChangeReservation : 1; unsigned char has_tappedProactiveTrayItem : 1; unsigned char has_viewedDetailsFromPlacecard : 1; unsigned char has_viewedInPlacecard : 1; unsigned char has_viewedInProactiveTray : 1; } _flags;
}

@property (nonatomic) char hasBookedUsingMaps;
@property (nonatomic) char bookedUsingMaps;
@property (nonatomic) char hasCancelled;
@property (nonatomic) char cancelled;
@property (nonatomic) char hasViewedInProactiveTray;
@property (nonatomic) char viewedInProactiveTray;
@property (nonatomic) char hasTappedProactiveTrayItem;
@property (nonatomic) char tappedProactiveTrayItem;
@property (nonatomic) char hasViewedInPlacecard;
@property (nonatomic) char viewedInPlacecard;
@property (nonatomic) char hasViewedDetailsFromPlacecard;
@property (nonatomic) char viewedDetailsFromPlacecard;
@property (nonatomic) char hasIsAsync;
@property (nonatomic) char isAsync;
@property (readonly, nonatomic) char hasAppId;
@property (retain, nonatomic) NSString *appId;
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (nonatomic) char hasCalled;
@property (nonatomic) char called;
@property (nonatomic) char hasRouted;
@property (nonatomic) char routed;
@property (nonatomic) char hasTappedChangeReservation;
@property (nonatomic) char tappedChangeReservation;
@property (nonatomic) char hasTappedCancelReservation;
@property (nonatomic) char tappedCancelReservation;
@property (nonatomic) char hasShared;
@property (nonatomic) char shared;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
