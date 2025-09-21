@class GEOLatLng, GEORPFeedbackTileFeatureInfo, PBDataReader;

@interface GEORPFeedbackCoordinateField : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPFeedbackTileFeatureInfo *_editedTile;
    GEOLatLng *_edited;
    GEORPFeedbackTileFeatureInfo *_originalTile;
    GEOLatLng *_original;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_editedTile : 1; unsigned char read_edited : 1; unsigned char read_originalTile : 1; unsigned char read_original : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasOriginal;
@property (retain, nonatomic) GEOLatLng *original;
@property (readonly, nonatomic) char hasEdited;
@property (retain, nonatomic) GEOLatLng *edited;
@property (readonly, nonatomic) char hasEditedTile;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *editedTile;
@property (readonly, nonatomic) char hasOriginalTile;
@property (retain, nonatomic) GEORPFeedbackTileFeatureInfo *originalTile;

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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
