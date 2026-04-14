@class NSMutableArray, PBUnknownFields;

@interface GEOARInfo : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_storefrontFaceGeometrys;
}

@property (retain, nonatomic) NSMutableArray *storefrontFaceGeometrys;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)storefrontFaceGeometryType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (void)addStorefrontFaceGeometry:(id)a0;
- (unsigned long long)storefrontFaceGeometrysCount;
- (void)clearStorefrontFaceGeometrys;
- (id)storefrontFaceGeometryAtIndex:(unsigned long long)a0;

@end
