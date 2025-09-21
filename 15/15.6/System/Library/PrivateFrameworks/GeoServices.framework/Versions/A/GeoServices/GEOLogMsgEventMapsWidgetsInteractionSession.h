@class GEOMapsNearbyWidget, GEOMapsTransitWidget, GEOMapsDestinationsWidget, PBDataReader;

@interface GEOLogMsgEventMapsWidgetsInteractionSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOMapsDestinationsWidget *_mapsDestinationsWidget;
    GEOMapsNearbyWidget *_mapsNearbyWidget;
    GEOMapsTransitWidget *_mapsTransitWidget;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _duration;
    int _endState;
    int _localDayOfWeek;
    int _localHour;
    int _mapsWidgetType;
    char _lockedMode;
    struct { unsigned char has_duration : 1; unsigned char has_endState : 1; unsigned char has_localDayOfWeek : 1; unsigned char has_localHour : 1; unsigned char has_mapsWidgetType : 1; unsigned char has_lockedMode : 1; unsigned char read_mapsDestinationsWidget : 1; unsigned char read_mapsNearbyWidget : 1; unsigned char read_mapsTransitWidget : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasMapsWidgetType;
@property (nonatomic) int mapsWidgetType;
@property (nonatomic) char hasEndState;
@property (nonatomic) int endState;
@property (readonly, nonatomic) char hasMapsDestinationsWidget;
@property (retain, nonatomic) GEOMapsDestinationsWidget *mapsDestinationsWidget;
@property (readonly, nonatomic) char hasMapsTransitWidget;
@property (retain, nonatomic) GEOMapsTransitWidget *mapsTransitWidget;
@property (readonly, nonatomic) char hasMapsNearbyWidget;
@property (retain, nonatomic) GEOMapsNearbyWidget *mapsNearbyWidget;
@property (nonatomic) char hasLockedMode;
@property (nonatomic) char lockedMode;
@property (nonatomic) char hasLocalHour;
@property (nonatomic) int localHour;
@property (nonatomic) char hasLocalDayOfWeek;
@property (nonatomic) int localDayOfWeek;
@property (nonatomic) char hasDuration;
@property (nonatomic) int duration;

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
- (int)StringAsMapsWidgetType:(id)a0;
- (int)StringAsEndState:(id)a0;
- (id)endStateAsString:(int)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapsWidgetTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
