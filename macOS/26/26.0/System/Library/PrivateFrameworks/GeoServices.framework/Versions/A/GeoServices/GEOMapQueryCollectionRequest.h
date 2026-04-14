@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementsType;

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
- (void)addRequestElements:(id)a0;
- (void)clearRequestElements;
- (id)requestElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
