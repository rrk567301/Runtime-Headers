@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying> {
    NSMutableArray *_significantLocations;
}

@property (retain, nonatomic) NSMutableArray *significantLocations;

+ (BOOL)isValid:(id)a0;
+ (Class)significantLocationType;

- (Class)responseClass;
- (id)initWithDictionary:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)initWithJSON:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)readAll:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)addSignificantLocation:(id)a0;
- (void)clearSignificantLocations;
- (id)significantLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)significantLocationsCount;

@end
