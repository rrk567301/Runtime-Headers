@class PBDataReader, GEORPContainmentCorrection, PBUnknownFields;

@interface GEORPPlaceContainmentCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPContainmentCorrection *_childContainment;
    GEORPContainmentCorrection *_parentContainment;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_childContainment : 1; unsigned char read_parentContainment : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasParentContainment;
@property (retain, nonatomic) GEORPContainmentCorrection *parentContainment;
@property (readonly, nonatomic) char hasChildContainment;
@property (retain, nonatomic) GEORPContainmentCorrection *childContainment;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
