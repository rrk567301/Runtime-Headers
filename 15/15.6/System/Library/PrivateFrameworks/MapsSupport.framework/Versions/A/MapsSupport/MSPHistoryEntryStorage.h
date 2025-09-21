@class MSPDirectionsSearch, NSString, MSPRidesharingTrip, MSPPlaceDisplay, MSPTransitStorageLineItem, PBUnknownFields, MSPQuerySearch;

@interface MSPHistoryEntryStorage : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned char position : 1; unsigned char timestamp : 1; unsigned char searchType : 1; unsigned char tracksRAPRecordingOnly : 1; } _has;
}

@property (nonatomic) char hasSearchType;
@property (nonatomic) int searchType;
@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) char hasPosition;
@property (nonatomic) double position;
@property (readonly, nonatomic) char hasQuerySearch;
@property (retain, nonatomic) MSPQuerySearch *querySearch;
@property (readonly, nonatomic) char hasDirectionsSearch;
@property (retain, nonatomic) MSPDirectionsSearch *directionsSearch;
@property (readonly, nonatomic) char hasPlaceDisplay;
@property (retain, nonatomic) MSPPlaceDisplay *placeDisplay;
@property (readonly, nonatomic) char hasTransitLineItem;
@property (retain, nonatomic) MSPTransitStorageLineItem *transitLineItem;
@property (readonly, nonatomic) char hasRidesharingTrip;
@property (retain, nonatomic) MSPRidesharingTrip *ridesharingTrip;
@property (nonatomic) char hasTracksRAPRecordingOnly;
@property (nonatomic) char tracksRAPRecordingOnly;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSearchType:(id)a0;
- (id)searchTypeAsString:(int)a0;

@end
