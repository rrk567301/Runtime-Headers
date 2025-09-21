@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (char)isValid:(id)a0;
+ (Class)requestElementsType;

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
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)addRequestElements:(id)a0;
- (void)clearRequestElements;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (char)hasGreenTeaWithValue:(char)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(char)a0;
- (id)requestElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
