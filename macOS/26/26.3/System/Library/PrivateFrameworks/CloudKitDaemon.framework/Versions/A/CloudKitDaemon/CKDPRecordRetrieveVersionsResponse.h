@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { unsigned char isDeleted : 1; } _has;
}

@property (nonatomic) BOOL hasIsDeleted;
@property (nonatomic) BOOL isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)addRecordVersions:(id)a0;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordVersionsCount;

@end
