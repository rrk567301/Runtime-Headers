@class PBDataReader, PBUnknownFields;

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _distToNextCheckpoints;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _timeToNextCheckpoints;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_distToNextCheckpoints : 1; unsigned char read_timeToNextCheckpoints : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long distToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *distToNextCheckpoints;
@property (readonly, nonatomic) unsigned long long timeToNextCheckpointsCount;
@property (readonly, nonatomic) unsigned int *timeToNextCheckpoints;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)clearDistToNextCheckpoints;
- (void)addDistToNextCheckpoint:(unsigned int)a0;
- (unsigned int)distToNextCheckpointAtIndex:(unsigned long long)a0;
- (void)setDistToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)clearTimeToNextCheckpoints;
- (void)addTimeToNextCheckpoint:(unsigned int)a0;
- (unsigned int)timeToNextCheckpointAtIndex:(unsigned long long)a0;
- (void)setTimeToNextCheckpoints:(unsigned int *)a0 count:(unsigned long long)a1;

@end
