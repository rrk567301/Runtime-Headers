@class MSPTransitStorageAttribution, NSString, NSArray, GEOMapItemIdentifier, PBUnknownFields, NSMutableArray, MSPTransitStorageLine, GEOMapRegion;
@protocol GEOTransitAttribution, GEOEncyclopedicInfo, GEOTransitArtworkDataSource, GEOTransitSystem;

@interface MSPTransitStorageLineItem : PBCodable <GEOTransitLineItem, NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) NSArray *labelItems;
@property (readonly, nonatomic) id<GEOTransitAttribution> attribution;
@property (readonly, nonatomic) GEOMapRegion *mapRegion;
@property (readonly, nonatomic) NSArray *incidents;
@property (readonly, nonatomic) char isIncidentsTTLExpired;
@property (readonly, nonatomic) char hasIncidentComponent;
@property (readonly, nonatomic) char hasEncyclopedicInfo;
@property (readonly, nonatomic) id<GEOEncyclopedicInfo> encyclopedicInfo;
@property (readonly, nonatomic) unsigned long long muid;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) GEOMapItemIdentifier *identifier;
@property (readonly, nonatomic) id<GEOTransitSystem> system;
@property (readonly, nonatomic) unsigned long long departureTimeDisplayStyle;
@property (readonly, nonatomic) char departuresAreVehicleSpecific;
@property (readonly, nonatomic) char isBus;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> artwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> modeArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> alternateArtwork;
@property (readonly, nonatomic) id<GEOTransitArtworkDataSource> headerArtwork;
@property (readonly, nonatomic) char hasLineColorString;
@property (readonly, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) char showVehicleNumber;
@property (readonly, nonatomic) NSArray *operatingHours;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) char hasLine;
@property (retain, nonatomic) MSPTransitStorageLine *line;
@property (readonly, nonatomic) char hasStoredMapRegion;
@property (retain, nonatomic) GEOMapRegion *storedMapRegion;
@property (readonly, nonatomic) char hasTransitAttribution;
@property (retain, nonatomic) MSPTransitStorageAttribution *transitAttribution;
@property (retain, nonatomic) NSMutableArray *incidents;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)incidentsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addIncidents:(id)a0;
- (void)clearIncidents;
- (id)incidentsAtIndex:(unsigned long long)a0;
- (unsigned long long)incidentsCount;
- (id)initWithLineItem:(id)a0;

@end
