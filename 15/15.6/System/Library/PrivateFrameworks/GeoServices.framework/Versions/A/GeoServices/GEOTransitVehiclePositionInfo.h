@class NSArray, NSString, NSMutableArray, PBUnknownFields;

@interface GEOTransitVehiclePositionInfo : PBCodable <GEOTransitVehicleEntries, NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_departureEntrys;
}

@property (readonly, nonatomic) unsigned long long firstTripID;
@property (readonly, nonatomic) unsigned long long tripIDForNextUpcomingDeparture;
@property (readonly, copy, nonatomic) NSArray *tripIDs;
@property (readonly, copy, nonatomic) NSArray *upcomingTripIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *departureEntrys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)departureEntryType;
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
- (void)addDepartureEntry:(id)a0;
- (void)clearDepartureEntrys;
- (void)clearUnknownFields:(char)a0;
- (id)departureEntryAtIndex:(unsigned long long)a0;
- (unsigned long long)departureEntrysCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
