@class GEOPDCameraFrame, GEOPDLocationInfo, PBDataReader;

@interface GEOPDMuninViewState : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDCameraFrame *_cameraFrame;
    GEOPDLocationInfo *_locationInfo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_cameraFrame : 1; unsigned char read_locationInfo : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasCameraFrame;
@property (retain, nonatomic) GEOPDCameraFrame *cameraFrame;
@property (readonly, nonatomic) char hasLocationInfo;
@property (retain, nonatomic) GEOPDLocationInfo *locationInfo;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
