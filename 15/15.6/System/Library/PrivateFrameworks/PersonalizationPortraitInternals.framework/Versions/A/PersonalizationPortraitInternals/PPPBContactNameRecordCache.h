@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {
    struct { unsigned char createdAt : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *records;
@property (nonatomic) char hasCreatedAt;
@property (nonatomic) long long createdAt;

+ (Class)recordsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addRecords:(id)a0;
- (id)recordsAtIndex:(unsigned long long)a0;
- (void)clearRecords;
- (unsigned long long)recordsCount;

@end
