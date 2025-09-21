@class GEOURLCamera, PBUnknownFields;

@interface GEOStorageCameraView : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOURLCamera *_camera;
    int _mapType;
    struct { unsigned char has_mapType : 1; } _flags;
}

@property (readonly, nonatomic) char hasCamera;
@property (retain, nonatomic) GEOURLCamera *camera;
@property (nonatomic) char hasMapType;
@property (nonatomic) int mapType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsMapType:(id)a0;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)mapTypeAsString:(int)a0;
- (void)readAll:(char)a0;

@end
