@class NSMutableArray;

@interface GEOChargingNetworkInfo : PBCodable <NSCopying> {
    NSMutableArray *_brandInfoMappings;
}

@property (retain, nonatomic) NSMutableArray *brandInfoMappings;

+ (Class)brandInfoMappingType;
+ (char)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBrandInfoMapping:(id)a0;
- (id)brandInfoMappingAtIndex:(unsigned long long)a0;
- (unsigned long long)brandInfoMappingsCount;
- (void)clearBrandInfoMappings;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;

@end
