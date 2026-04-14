@class NSMutableArray, PBUnknownFields;

@interface GEOVersionManifest : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_serviceVersions;
}

@property (retain, nonatomic) NSMutableArray *serviceVersions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)serviceVersionType;

- (id)serviceVersionAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)serviceVersionsCount;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)description;
- (void)clearServiceVersions;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;
- (void)addServiceVersion:(id)a0;
- (id)initWithJSON:(id)a0;

@end
