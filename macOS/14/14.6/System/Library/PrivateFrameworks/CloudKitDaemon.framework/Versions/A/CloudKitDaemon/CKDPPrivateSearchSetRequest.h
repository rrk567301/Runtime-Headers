@class NSString, CKDPRecordIdentifier, NSData;

@interface CKDPPrivateSearchSetRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordId;
@property (retain, nonatomic) CKDPRecordIdentifier *recordId;
@property (readonly, nonatomic) BOOL hasIndexId;
@property (retain, nonatomic) NSString *indexId;
@property (readonly, nonatomic) BOOL hasBloomFilter;
@property (retain, nonatomic) NSData *bloomFilter;

+ (id)options;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
