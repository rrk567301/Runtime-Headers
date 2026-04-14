@class NSString, NSMutableArray, CKDPRecordZoneIdentifier;

@interface CKDPPrivateSearchGetRequestPrivateSearchRequestParameters : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasIndexId;
@property (retain, nonatomic) NSString *indexId;
@property (retain, nonatomic) NSMutableArray *bloomFilterBitsRequests;

+ (Class)bloomFilterBitsRequestType;

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
- (void)addBloomFilterBitsRequest:(id)a0;
- (id)bloomFilterBitsRequestAtIndex:(unsigned long long)a0;
- (unsigned long long)bloomFilterBitsRequestsCount;
- (void)clearBloomFilterBitsRequests;

@end
