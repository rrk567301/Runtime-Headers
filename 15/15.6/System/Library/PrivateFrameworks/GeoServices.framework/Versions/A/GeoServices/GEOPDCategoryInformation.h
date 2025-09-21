@class PBUnknownFields, NSString, GEOLocalizedString, PBDataReader, GEOStyleAttributes;

@interface GEOPDCategoryInformation : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_localizedMapsCategoryName;
    NSString *_mapsCategoryId;
    GEOStyleAttributes *_mapsCategoryStyleAttributes;
    NSString *_walletCategoryId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_localizedMapsCategoryName : 1; unsigned char read_mapsCategoryId : 1; unsigned char read_mapsCategoryStyleAttributes : 1; unsigned char read_walletCategoryId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) char hasWalletCategoryId;
@property (retain, nonatomic) NSString *walletCategoryId;
@property (readonly, nonatomic) char hasMapsCategoryId;
@property (retain, nonatomic) NSString *mapsCategoryId;
@property (readonly, nonatomic) char hasLocalizedMapsCategoryName;
@property (retain, nonatomic) GEOLocalizedString *localizedMapsCategoryName;
@property (readonly, nonatomic) char hasMapsCategoryStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *mapsCategoryStyleAttributes;
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
