@class NSMutableArray, PBUnknownFields;

@interface GEOLogMsgEventMapKitCounts : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_mapKitCounts;
}

@property (retain, nonatomic) NSMutableArray *mapKitCounts;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)mapKitCountsType;

- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)addMapKitCounts:(id)a0;
- (void)clearMapKitCounts;
- (id)mapKitCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)mapKitCountsCount;

@end
