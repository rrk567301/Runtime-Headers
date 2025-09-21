@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventEVTrip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_chargeLocationDetails;
    NSString *_metro;
    NSMutableArray *_realtimeDodgeballs;
    NSMutableArray *_stopAddedDetails;
    NSMutableArray *_stopRemovedDetails;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    char _chargingStopAddedThroughSar;
    char _originalTripIncludedChargingStation;
    char _outOfCharge;
    char _outOfRangeAlertDisplayed;
    char _tripIncludedPreferredChargingStation;
    struct { unsigned char has_chargingStopAddedThroughSar : 1; unsigned char has_originalTripIncludedChargingStation : 1; unsigned char has_outOfCharge : 1; unsigned char has_outOfRangeAlertDisplayed : 1; unsigned char has_tripIncludedPreferredChargingStation : 1; unsigned char read_unknownFields : 1; unsigned char read_chargeLocationDetails : 1; unsigned char read_metro : 1; unsigned char read_realtimeDodgeballs : 1; unsigned char read_stopAddedDetails : 1; unsigned char read_stopRemovedDetails : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasOutOfCharge;
@property (nonatomic) char outOfCharge;
@property (nonatomic) char hasOutOfRangeAlertDisplayed;
@property (nonatomic) char outOfRangeAlertDisplayed;
@property (retain, nonatomic) NSMutableArray *chargeLocationDetails;
@property (retain, nonatomic) NSMutableArray *stopAddedDetails;
@property (readonly, nonatomic) char hasMetro;
@property (retain, nonatomic) NSString *metro;
@property (nonatomic) char hasOriginalTripIncludedChargingStation;
@property (nonatomic) char originalTripIncludedChargingStation;
@property (nonatomic) char hasChargingStopAddedThroughSar;
@property (nonatomic) char chargingStopAddedThroughSar;
@property (nonatomic) char hasTripIncludedPreferredChargingStation;
@property (nonatomic) char tripIncludedPreferredChargingStation;
@property (retain, nonatomic) NSMutableArray *stopRemovedDetails;
@property (retain, nonatomic) NSMutableArray *realtimeDodgeballs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)chargeLocationDetailsType;
+ (char)isValid:(id)a0;
+ (Class)realtimeDodgeballType;
+ (Class)stopAddedDetailsType;
+ (Class)stopRemovedDetailsType;

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
- (void)addChargeLocationDetails:(id)a0;
- (void)addRealtimeDodgeball:(id)a0;
- (void)addStopAddedDetails:(id)a0;
- (void)addStopRemovedDetails:(id)a0;
- (id)chargeLocationDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)chargeLocationDetailsCount;
- (void)clearChargeLocationDetails;
- (void)clearRealtimeDodgeballs;
- (void)clearStopAddedDetails;
- (void)clearStopRemovedDetails;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)realtimeDodgeballAtIndex:(unsigned long long)a0;
- (unsigned long long)realtimeDodgeballsCount;
- (id)stopAddedDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)stopAddedDetailsCount;
- (id)stopRemovedDetailsAtIndex:(unsigned long long)a0;
- (unsigned long long)stopRemovedDetailsCount;

@end
