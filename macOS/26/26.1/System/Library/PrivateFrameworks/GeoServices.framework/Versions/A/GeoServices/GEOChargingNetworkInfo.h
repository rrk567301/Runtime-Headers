@class NSMutableArray;

@interface GEOChargingNetworkInfo : PBCodable <NSCopying> {
    NSMutableArray *_brandInfoMappings;
}

@property (retain, nonatomic) NSMutableArray *brandInfoMappings;

+ (BOOL)isValid:(id)a0;
+ (Class)brandInfoMappingType;

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)description;
- (void)readAll:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBrandInfoMapping:(id)a0;
- (id)brandInfoMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)brandInfoMappingsCount;
- (void)clearBrandInfoMappings;

@end
