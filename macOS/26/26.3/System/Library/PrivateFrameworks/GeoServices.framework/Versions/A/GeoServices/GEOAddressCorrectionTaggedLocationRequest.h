@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying> {
    NSMutableArray *_significantLocations;
}

@property (retain, nonatomic) NSMutableArray *significantLocations;

+ (BOOL)isValid:(id)a0;
+ (Class)significantLocationType;

- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addSignificantLocation:(id)a0;
- (void)clearSignificantLocations;
- (id)significantLocationAtIndex:(unsigned long long)a0;
- (unsigned long long)significantLocationsCount;

@end
