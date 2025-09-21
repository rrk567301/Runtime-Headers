@class NSMutableArray, PBDataReader;

@interface GEOLPRWorld : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSMutableArray *_powerTypes;
    NSMutableArray *_regions;
    NSMutableArray *_vehicleTypes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_powerTypes : 1; unsigned char read_regions : 1; unsigned char read_vehicleTypes : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
