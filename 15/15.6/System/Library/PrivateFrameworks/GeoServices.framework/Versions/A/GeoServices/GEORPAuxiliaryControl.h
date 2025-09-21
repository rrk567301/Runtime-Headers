@class GEORPWatchAuxiliaryControl, PBDataReader, GEORPCarPlayAuxiliaryControl;

@interface GEORPAuxiliaryControl : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEORPCarPlayAuxiliaryControl *_car;
    GEORPWatchAuxiliaryControl *_watch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_car : 1; unsigned char read_watch : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasWatch;
@property (retain, nonatomic) GEORPWatchAuxiliaryControl *watch;
@property (readonly, nonatomic) char hasCar;
@property (retain, nonatomic) GEORPCarPlayAuxiliaryControl *car;

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
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
