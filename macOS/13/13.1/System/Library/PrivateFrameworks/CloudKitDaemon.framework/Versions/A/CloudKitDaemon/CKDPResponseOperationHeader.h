@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

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
- (void)clearAssetAuthorizationResponses;
- (void)addAssetAuthorizationResponses:(id)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (void)clearThrottleConfigs;
- (void)addThrottleConfig:(id)a0;
- (unsigned long long)throttleConfigsCount;
- (id)throttleConfigAtIndex:(unsigned long long)a0;

@end
