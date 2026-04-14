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

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)init;
- (void)writeTo:(id)a0;

@end
