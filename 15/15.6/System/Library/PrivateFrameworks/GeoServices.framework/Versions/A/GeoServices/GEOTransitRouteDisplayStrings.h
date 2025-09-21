@class PBDataReader, NSString, GEOFormattedString, NSMutableArray, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitRouteDisplayStrings : PBCodable <GEOComposedRouteTransitDisplayStrings, NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_advisorys;
    GEOFormattedString *_badge;
    GEOFormattedString *_durationList;
    GEOFormattedString *_duration;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_travelDescription;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_advisorys : 1; unsigned char read_badge : 1; unsigned char read_durationList : 1; unsigned char read_duration : 1; unsigned char read_planningDescription : 1; unsigned char read_travelDescription : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) id<GEOServerFormattedString> previewDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> pickingDurationFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> planningDescriptionFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitDescriptionFormatString;
@property (readonly, nonatomic) id<GEOServerFormattedString> transitRouteBadge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasPlanningDescription;
@property (retain, nonatomic) GEOFormattedString *planningDescription;
@property (readonly, nonatomic) char hasDuration;
@property (retain, nonatomic) GEOFormattedString *duration;
@property (readonly, nonatomic) char hasDurationList;
@property (retain, nonatomic) GEOFormattedString *durationList;
@property (readonly, nonatomic) char hasTravelDescription;
@property (retain, nonatomic) GEOFormattedString *travelDescription;
@property (retain, nonatomic) NSMutableArray *advisorys;
@property (readonly, nonatomic) char hasBadge;
@property (retain, nonatomic) GEOFormattedString *badge;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)advisoryType;
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
- (void)addAdvisory:(id)a0;
- (id)advisoryAtIndex:(unsigned long long)a0;
- (unsigned long long)advisorysCount;
- (void)clearAdvisorys;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
