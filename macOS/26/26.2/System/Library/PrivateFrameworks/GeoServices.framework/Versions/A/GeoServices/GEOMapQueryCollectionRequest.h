@class NSMutableArray;

@interface GEOMapQueryCollectionRequest : PBRequest <NSCopying> {
    NSMutableArray *_requestElements;
}

@property (retain, nonatomic) NSMutableArray *requestElements;

+ (BOOL)isValid:(id)a0;
+ (Class)requestElementsType;

- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (void)clearSensitiveFields:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (Class)responseClass;
- (void)mergeFrom:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)readAll:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (unsigned int)requestTypeCode;
- (void)addRequestElements:(id)a0;
- (void)clearRequestElements;
- (id)requestElementsAtIndex:(unsigned long long)a0;
- (unsigned long long)requestElementsCount;

@end
