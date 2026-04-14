@class NSMutableArray;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {
    NSMutableArray *_mapKitCounts;
}

@property (retain, nonatomic) NSMutableArray *mapKitCounts;

+ (BOOL)isValid:(id)a0;
+ (Class)mapKitCountsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)copyTo:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (void)addMapKitCounts:(id)a0;
- (unsigned long long)mapKitCountsCount;
- (void)clearMapKitCounts;
- (id)mapKitCountsAtIndex:(unsigned long long)a0;

@end
