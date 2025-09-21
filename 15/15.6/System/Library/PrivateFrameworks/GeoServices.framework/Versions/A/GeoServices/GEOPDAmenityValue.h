@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPDAmenityValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_amenityId;
    NSMutableArray *_names;
    NSString *_symbolImageName;
    NSString *_vendorId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _amenityType;
    char _amenityPresent;
    struct { unsigned char has_amenityType : 1; unsigned char has_amenityPresent : 1; unsigned char read_unknownFields : 1; unsigned char read_amenityId : 1; unsigned char read_names : 1; unsigned char read_symbolImageName : 1; unsigned char read_vendorId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) char hasAmenityType;
@property (nonatomic) int amenityType;
@property (nonatomic) char hasAmenityPresent;
@property (nonatomic) char amenityPresent;
@property (readonly, nonatomic) char hasVendorId;
@property (retain, nonatomic) NSString *vendorId;
@property (readonly, nonatomic) char hasAmenityId;
@property (retain, nonatomic) NSString *amenityId;
@property (retain, nonatomic) NSMutableArray *names;
@property (readonly, nonatomic) char hasSymbolImageName;
@property (retain, nonatomic) NSString *symbolImageName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (char)isValid:(id)a0;
+ (Class)nameType;

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
- (id)displayTitle;
- (int)StringAsAmenityType:(id)a0;
- (void)addName:(id)a0;
- (id)amenityTypeAsString:(int)a0;
- (void)clearNames;
- (void)clearUnknownFields:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)nameAtIndex:(unsigned long long)a0;
- (unsigned long long)namesCount;
- (void)readAll:(char)a0;

@end
