@class GEORPPoiEnrichmentPlaceContext, PBDataReader, GEOPDPlace, GEORPScorecard, NSMutableArray, GEORPScorecardUpdate;

@interface GEORPPoiEnrichmentUpdate : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_imageIds;
    NSMutableArray *_imageUpdates;
    GEORPPoiEnrichmentPlaceContext *_placeContext;
    GEOPDPlace *_place;
    GEORPScorecardUpdate *_scorecardUpdate;
    GEORPScorecard *_scorecard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _action;
    struct { unsigned char has_action : 1; unsigned char read_imageIds : 1; unsigned char read_imageUpdates : 1; unsigned char read_placeContext : 1; unsigned char read_place : 1; unsigned char read_scorecardUpdate : 1; unsigned char read_scorecard : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasAction;
@property (nonatomic) int action;
@property (readonly, nonatomic) char hasPlace;
@property (retain, nonatomic) GEOPDPlace *place;
@property (retain, nonatomic) NSMutableArray *imageIds;
@property (readonly, nonatomic) char hasScorecard;
@property (retain, nonatomic) GEORPScorecard *scorecard;
@property (retain, nonatomic) NSMutableArray *imageUpdates;
@property (readonly, nonatomic) char hasScorecardUpdate;
@property (retain, nonatomic) GEORPScorecardUpdate *scorecardUpdate;
@property (readonly, nonatomic) char hasPlaceContext;
@property (retain, nonatomic) GEORPPoiEnrichmentPlaceContext *placeContext;

+ (Class)imageUpdateType;
+ (Class)imageIdType;
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
- (id)actionAsString:(int)a0;
- (void)copyTo:(id)a0;
- (int)StringAsAction:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addImageUpdate:(id)a0;
- (id)imageIdAtIndex:(unsigned long long)a0;
- (void)addImageId:(id)a0;
- (void)clearImageIds;
- (void)clearImageUpdates;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (unsigned long long)imageIdsCount;
- (id)imageUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)imageUpdatesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
