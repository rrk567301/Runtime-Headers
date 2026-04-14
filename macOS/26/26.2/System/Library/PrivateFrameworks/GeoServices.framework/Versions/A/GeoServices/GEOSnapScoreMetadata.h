@class PBDataReader, GEOSnapScorePoint, NSMutableArray, PBUnknownFields;

@interface GEOSnapScoreMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_destinationAccessPoints;
    NSMutableArray *_destinationPoints;
    NSMutableArray *_originAccessPoints;
    GEOSnapScorePoint *_originPoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_destinationAccessPoints : 1; unsigned char read_destinationPoints : 1; unsigned char read_originAccessPoints : 1; unsigned char read_originPoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)init;
- (id)dictionaryRepresentation;

@end
