@class GEOPDGroundDataBuild, GEOPDOrientedPosition, GEOPDRigMetrics, GEOPDGeographicCoordinate, PBDataReader, GEOTileCoordinate, NSMutableArray, GEOPDOrientedTilePosition;

@interface GEOPDPhotoPosition : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _cameraMetadataIndexs;
    GEOPDGroundDataBuild *_build;
    NSMutableArray *_cameraMetadatas;
    unsigned long long _imageryTimestamp;
    unsigned long long _imdataId;
    GEOTileCoordinate *_parentTile;
    GEOPDGeographicCoordinate *_positionGeo;
    GEOPDOrientedPosition *_position;
    GEOPDRigMetrics *_rigMetrics;
    GEOPDOrientedTilePosition *_tilePosition;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _buildTableIndex;
    int _revision;
    struct { unsigned char has_imageryTimestamp : 1; unsigned char has_imdataId : 1; unsigned char has_buildTableIndex : 1; unsigned char has_revision : 1; unsigned char read_cameraMetadataIndexs : 1; unsigned char read_build : 1; unsigned char read_cameraMetadatas : 1; unsigned char read_parentTile : 1; unsigned char read_positionGeo : 1; unsigned char read_position : 1; unsigned char read_rigMetrics : 1; unsigned char read_tilePosition : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasImdataId;
@property (nonatomic) unsigned long long imdataId;
@property (retain, nonatomic) NSMutableArray *cameraMetadatas;
@property (readonly, nonatomic) char hasPosition;
@property (retain, nonatomic) GEOPDOrientedPosition *position;
@property (nonatomic) char hasRevision;
@property (nonatomic) int revision;
@property (nonatomic) char hasImageryTimestamp;
@property (nonatomic) unsigned long long imageryTimestamp;
@property (readonly, nonatomic) char hasPositionGeo;
@property (retain, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property (nonatomic) char hasBuildTableIndex;
@property (nonatomic) unsigned int buildTableIndex;
@property (readonly, nonatomic) char hasBuild;
@property (retain, nonatomic) GEOPDGroundDataBuild *build;
@property (readonly, nonatomic) unsigned long long cameraMetadataIndexsCount;
@property (readonly, nonatomic) unsigned int *cameraMetadataIndexs;
@property (readonly, nonatomic) char hasTilePosition;
@property (retain, nonatomic) GEOPDOrientedTilePosition *tilePosition;
@property (readonly, nonatomic) char hasParentTile;
@property (retain, nonatomic) GEOTileCoordinate *parentTile;
@property (readonly, nonatomic) char hasRigMetrics;
@property (retain, nonatomic) GEOPDRigMetrics *rigMetrics;

+ (Class)cameraMetadataType;
+ (char)isValid:(id)a0;

- (void)dealloc;
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
- (void)addCameraMetadata:(id)a0;
- (void)addCameraMetadataIndex:(unsigned int)a0;
- (id)cameraMetadataAtIndex:(unsigned long long)a0;
- (unsigned int)cameraMetadataIndexAtIndex:(unsigned long long)a0;
- (unsigned long long)cameraMetadatasCount;
- (void)clearCameraMetadataIndexs;
- (void)clearCameraMetadatas;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (void)setCameraMetadataIndexs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
