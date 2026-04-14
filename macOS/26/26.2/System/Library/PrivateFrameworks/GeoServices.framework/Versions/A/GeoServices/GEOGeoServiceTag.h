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

+ (BOOL)isValid:(id)a0;
+ (id)defaultTag;

- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (int)StringAsServiceType:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (id)serviceTypeAsString:(int)a0;

@end
