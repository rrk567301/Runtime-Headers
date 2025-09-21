@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    struct { unsigned char isDeleted : 1; } _has;
}

@property (nonatomic) char hasIsDeleted;
@property (nonatomic) char isDeleted;
@property (retain, nonatomic) NSMutableArray *recordVersions;

+ (Class)recordVersionsType;

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
- (void)addRecordVersions:(id)a0;
- (void)clearRecordVersions;
- (id)recordVersionsAtIndex:(unsigned long long)a0;
- (unsigned long long)recordVersionsCount;

@end
