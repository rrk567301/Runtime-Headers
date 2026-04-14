@class NSData, PIRGeoListSnippet;

@interface PIRAspireResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGeoList;
@property (retain, nonatomic) PIRGeoListSnippet *geoList;
@property (readonly, nonatomic) BOOL hasCompressedGeoList;
@property (retain, nonatomic) NSData *compressedGeoList;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
