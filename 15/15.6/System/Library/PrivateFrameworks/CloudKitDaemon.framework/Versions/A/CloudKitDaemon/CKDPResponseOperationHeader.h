@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

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
- (void)addAssetAuthorizationResponses:(id)a0;
- (void)addThrottleConfig:(id)a0;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)clearAssetAuthorizationResponses;
- (void)clearThrottleConfigs;
- (id)throttleConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)throttleConfigsCount;

@end
