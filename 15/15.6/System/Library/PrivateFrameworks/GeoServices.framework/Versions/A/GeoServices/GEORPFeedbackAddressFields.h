@class NSString, PBDataReader;

@interface GEORPFeedbackAddressFields : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_addressBasic;
    NSString *_addressBuilding;
    NSString *_addressFloor;
    NSString *_addressUnit;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addressBasic : 1; unsigned char read_addressBuilding : 1; unsigned char read_addressFloor : 1; unsigned char read_addressUnit : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasAddressBasic;
@property (retain, nonatomic) NSString *addressBasic;
@property (readonly, nonatomic) char hasAddressUnit;
@property (retain, nonatomic) NSString *addressUnit;
@property (readonly, nonatomic) char hasAddressFloor;
@property (retain, nonatomic) NSString *addressFloor;
@property (readonly, nonatomic) char hasAddressBuilding;
@property (retain, nonatomic) NSString *addressBuilding;

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
