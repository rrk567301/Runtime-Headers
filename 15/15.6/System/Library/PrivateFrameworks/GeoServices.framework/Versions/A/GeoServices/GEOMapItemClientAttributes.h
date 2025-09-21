@class PBUnknownFields, PBDataReader, GEOMapItemCorrectedLocationAttributes, GEOMapItemAddressBookAttributes, GEOMapItemMapsSyncAttributes, GEOMapItemRoutineAttributes;

@interface GEOMapItemClientAttributes : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOMapItemAddressBookAttributes *_addressBookAttributes;
    GEOMapItemCorrectedLocationAttributes *_correctedLocationAttributes;
    GEOMapItemMapsSyncAttributes *_mapsSyncAttributes;
    GEOMapItemRoutineAttributes *_routineAttributes;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_addressBookAttributes : 1; unsigned char read_correctedLocationAttributes : 1; unsigned char read_mapsSyncAttributes : 1; unsigned char read_routineAttributes : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAddressBookAttributes;
@property (retain, nonatomic) GEOMapItemAddressBookAttributes *addressBookAttributes;
@property (readonly, nonatomic) char hasRoutineAttributes;
@property (retain, nonatomic) GEOMapItemRoutineAttributes *routineAttributes;
@property (readonly, nonatomic) char hasCorrectedLocationAttributes;
@property (retain, nonatomic) GEOMapItemCorrectedLocationAttributes *correctedLocationAttributes;
@property (readonly, nonatomic) char hasMapsSyncAttributes;
@property (retain, nonatomic) GEOMapItemMapsSyncAttributes *mapsSyncAttributes;
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
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
