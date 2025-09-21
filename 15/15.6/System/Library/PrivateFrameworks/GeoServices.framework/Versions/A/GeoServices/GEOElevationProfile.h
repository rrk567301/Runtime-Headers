@class PBDataReader, GEOMinimumVisibleElevationRange, GEOFormattedString, NSMutableArray, PBUnknownFields;

@interface GEOElevationProfile : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_elevationDescription;
    GEOMinimumVisibleElevationRange *_minimumVisibleElevationRange;
    NSMutableArray *_points;
    NSMutableArray *_segmentDescriptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _sumElevationGainCm;
    unsigned int _sumElevationLossCm;
    struct { unsigned char has_sumElevationGainCm : 1; unsigned char has_sumElevationLossCm : 1; unsigned char read_unknownFields : 1; unsigned char read_elevationDescription : 1; unsigned char read_minimumVisibleElevationRange : 1; unsigned char read_points : 1; unsigned char read_segmentDescriptions : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *points;
@property (nonatomic) char hasSumElevationGainCm;
@property (nonatomic) unsigned int sumElevationGainCm;
@property (nonatomic) char hasSumElevationLossCm;
@property (nonatomic) unsigned int sumElevationLossCm;
@property (readonly, nonatomic) char hasMinimumVisibleElevationRange;
@property (retain, nonatomic) GEOMinimumVisibleElevationRange *minimumVisibleElevationRange;
@property (retain, nonatomic) NSMutableArray *segmentDescriptions;
@property (readonly, nonatomic) char hasElevationDescription;
@property (retain, nonatomic) GEOFormattedString *elevationDescription;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)pointType;
+ (Class)segmentDescriptionType;

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
- (void)addPoint:(id)a0;
- (void)addSegmentDescription:(id)a0;
- (void)clearPoints;
- (void)clearSegmentDescriptions;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)pointAtIndex:(unsigned long long)a0;
- (unsigned long long)pointsCount;
- (void)readAll:(char)a0;
- (id)segmentDescriptionAtIndex:(unsigned long long)a0;
- (unsigned long long)segmentDescriptionsCount;

@end
