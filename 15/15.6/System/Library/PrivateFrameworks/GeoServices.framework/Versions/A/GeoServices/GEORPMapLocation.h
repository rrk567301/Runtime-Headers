@class GEOPDViewportInfo, NSString, NSData, GEOLatLng, PBDataReader;

@interface GEORPMapLocation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOLatLng *_coordinate;
    NSData *_image;
    NSString *_mapScreenshotId;
    GEOPDViewportInfo *_viewportInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _zoomLevel;
    struct { unsigned char has_zoomLevel : 1; unsigned char read_coordinate : 1; unsigned char read_image : 1; unsigned char read_mapScreenshotId : 1; unsigned char read_viewportInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasImage;
@property (retain, nonatomic) NSData *image;
@property (readonly, nonatomic) char hasCoordinate;
@property (retain, nonatomic) GEOLatLng *coordinate;
@property (nonatomic) char hasZoomLevel;
@property (nonatomic) float zoomLevel;
@property (readonly, nonatomic) char hasViewportInfo;
@property (retain, nonatomic) GEOPDViewportInfo *viewportInfo;
@property (readonly, nonatomic) char hasMapScreenshotId;
@property (retain, nonatomic) NSString *mapScreenshotId;

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
- (void)_setMapMode:(int)a0 region:(id)a1;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
