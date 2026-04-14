@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) BOOL hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)recordsType;

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
- (void)clearRecords;
- (void)addRecords:(id)a0;
- (unsigned long long)recordsCount;
- (id)recordsAtIndex:(unsigned long long)a0;

@end
