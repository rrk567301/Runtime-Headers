@class PBUnknownFields, NSString, NSArray, GEOMapItemIdentifier, MSPTransitStorageArtwork, MSPTransitStorageSystem, GEOLatLng;
@protocol GEOTransitSystem, GEOTransitArtworkDataSource;

@interface MSPTransitStorageLine : PBCodable <GEOTransitLine, NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char muid : 1; } _has;
}

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
@property (nonatomic) char hasMuid;
@property (nonatomic) unsigned long long muid;
@property (readonly, nonatomic) char hasName;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) char hasLineColorString;
@property (retain, nonatomic) NSString *lineColorString;
@property (readonly, nonatomic) char hasArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *artwork;
@property (readonly, nonatomic) char hasModeArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *modeArtwork;
@property (readonly, nonatomic) char hasSystem;
@property (retain, nonatomic) MSPTransitStorageSystem *system;
@property (readonly, nonatomic) char hasAlternateArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *alternateArtwork;
@property (readonly, nonatomic) char hasLocationHint;
@property (retain, nonatomic) GEOLatLng *locationHint;
@property (readonly, nonatomic) char hasHeaderArtwork;
@property (retain, nonatomic) MSPTransitStorageArtwork *headerArtwork;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithLine:(id)a0;

@end
