@class PBUnknownFields;

@interface GEOArtworkCapabilities : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    BOOL _supportAppleAccountAvatar;
    BOOL _supportSfSymbol;
    struct { unsigned char has_supportAppleAccountAvatar : 1; unsigned char has_supportSfSymbol : 1; } _flags;
}

@property (nonatomic) BOOL hasSupportSfSymbol;
@property (nonatomic) BOOL supportSfSymbol;
@property (nonatomic) BOOL hasSupportAppleAccountAvatar;
@property (nonatomic) BOOL supportAppleAccountAvatar;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
