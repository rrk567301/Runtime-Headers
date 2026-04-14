@class PBDataReader;

@interface GEOVLFFrameDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { float *list; unsigned long long count; unsigned long long size; } _calibrationMatrixs;
    struct { float *list; unsigned long long count; unsigned long long size; } _vioPoses;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    float _radialDistortion1;
    float _radialDistortion2;
    unsigned int _vioStatus;
    struct { unsigned char has_radialDistortion1 : 1; unsigned char has_radialDistortion2 : 1; unsigned char has_vioStatus : 1; unsigned char read_calibrationMatrixs : 1; unsigned char read_vioPoses : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasVioStatus;
@property (nonatomic) unsigned int vioStatus;
@property (readonly, nonatomic) unsigned long long vioPosesCount;
@property (readonly, nonatomic) float *vioPoses;
@property (readonly, nonatomic) unsigned long long calibrationMatrixsCount;
@property (readonly, nonatomic) float *calibrationMatrixs;
@property (nonatomic) BOOL hasRadialDistortion1;
@property (nonatomic) float radialDistortion1;
@property (nonatomic) BOOL hasRadialDistortion2;
@property (nonatomic) float radialDistortion2;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (float)vioPoseAtIndex:(unsigned long long)a0;
- (void)addCalibrationMatrix:(float)a0;
- (void)addVioPose:(float)a0;
- (float)calibrationMatrixAtIndex:(unsigned long long)a0;
- (void)clearCalibrationMatrixs;
- (void)clearVioPoses;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setCalibrationMatrixs:(float *)a0 count:(unsigned long long)a1;
- (void)setVioPoses:(float *)a0 count:(unsigned long long)a1;

@end
