@class NSString, PBUnknownFields;

@interface GEOGeoServiceTag : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_tag;
    int _serviceType;
    struct { unsigned char has_serviceType : 1; } _flags;
}

@property (nonatomic) BOOL hasServiceType;
@property (nonatomic) int serviceType;
@property (retain, nonatomic) NSString *tag;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (id)defaultTag;
+ (BOOL)isValid:(id)a0;

- (id)dictionaryRepresentation;
- (int)StringAsServiceType:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serviceTypeAsString:(int)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;

@end
