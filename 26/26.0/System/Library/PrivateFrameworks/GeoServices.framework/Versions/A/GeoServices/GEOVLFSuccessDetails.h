@class GEOVLFCorrection, PBDataReader, PBUnknownFields;

@interface GEOVLFSuccessDetails : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _inlierSuccessIndices;
    GEOVLFCorrection *_correction;
    double _poseConfidence;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_poseConfidence : 1; unsigned char read_unknownFields : 1; unsigned char read_inlierSuccessIndices : 1; unsigned char read_correction : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasCorrection;
@property (retain, nonatomic) GEOVLFCorrection *correction;
@property (nonatomic) BOOL hasPoseConfidence;
@property (nonatomic) double poseConfidence;
@property (readonly, nonatomic) unsigned long long inlierSuccessIndicesCount;
@property (readonly, nonatomic) unsigned int *inlierSuccessIndices;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)init;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addInlierSuccessIndices:(unsigned int)a0;
- (void)clearInlierSuccessIndices;
- (unsigned int)inlierSuccessIndicesAtIndex:(unsigned long long)a0;
- (void)setInlierSuccessIndices:(unsigned int *)a0 count:(unsigned long long)a1;

@end
