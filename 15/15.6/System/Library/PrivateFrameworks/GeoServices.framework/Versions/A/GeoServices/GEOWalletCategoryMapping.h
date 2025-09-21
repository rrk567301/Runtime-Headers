@class NSString, GEOStyleAttributes, PBDataReader;

@interface GEOWalletCategoryMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOStyleAttributes *_stylesAttributes;
    NSString *_walletCategory;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_stylesAttributes : 1; unsigned char read_walletCategory : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasWalletCategory;
@property (retain, nonatomic) NSString *walletCategory;
@property (readonly, nonatomic) char hasStylesAttributes;
@property (retain, nonatomic) GEOStyleAttributes *stylesAttributes;

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
