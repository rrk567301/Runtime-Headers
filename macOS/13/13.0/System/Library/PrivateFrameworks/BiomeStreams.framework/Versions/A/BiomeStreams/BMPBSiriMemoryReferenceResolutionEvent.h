@class NSString, NSMutableArray;

@interface BMPBSiriMemoryReferenceResolutionEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSMutableArray *entityMapElements;

+ (Class)entityMapElementsType;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)clearEntityMapElements;
- (void)addEntityMapElements:(id)a0;
- (unsigned long long)entityMapElementsCount;
- (id)entityMapElementsAtIndex:(unsigned long long)a0;

@end
