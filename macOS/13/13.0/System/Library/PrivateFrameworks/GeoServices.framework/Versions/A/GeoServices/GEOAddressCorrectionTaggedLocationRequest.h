@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying> {
    NSMutableArray *_significantLocations;
}

@property (retain, nonatomic) NSMutableArray *significantLocations;

+ (BOOL)isValid:(id)a0;
+ (Class)significantLocationType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)jsonRepresentation;
- (id)initWithJSON:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void)clearSignificantLocations;
- (void)addSignificantLocation:(id)a0;
- (unsigned long long)significantLocationsCount;
- (id)significantLocationAtIndex:(unsigned long long)a0;

@end
