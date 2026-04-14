@class NSString, PBUnknownFields;

@interface GEOAsset : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_url;
    int _scaleFactor;
    struct { unsigned char has_scaleFactor : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL hasScaleFactor;
@property (nonatomic) int scaleFactor;
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
- (int)StringAsScaleFactor:(id)a0;
- (id)scaleFactorAsString:(int)a0;

@end
