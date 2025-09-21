@class NSString, GEOFormattedString, NSDate, PBUnknownFields;
@protocol GEOServerFormattedString;

@interface GEOTransitServiceGap : PBCodable <GEOServiceGap, NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_displayMessage;
    unsigned int _absEndTime;
    unsigned int _absStartTime;
    unsigned int _appearsBeforeSuggestedRouteIndex;
    struct { unsigned char has_absEndTime : 1; unsigned char has_absStartTime : 1; unsigned char has_appearsBeforeSuggestedRouteIndex : 1; } _flags;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) unsigned long long routeListInsertBeforeIndex;
@property (readonly, nonatomic) id<GEOServerFormattedString> displayMessagFormatString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char hasAppearsBeforeSuggestedRouteIndex;
@property (nonatomic) unsigned int appearsBeforeSuggestedRouteIndex;
@property (nonatomic) char hasAbsStartTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic) char hasAbsEndTime;
@property (nonatomic) unsigned int absEndTime;
@property (readonly, nonatomic) char hasDisplayMessage;
@property (retain, nonatomic) GEOFormattedString *displayMessage;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
