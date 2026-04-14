@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (unsigned long long)throttleConfigsCount;
- (void)addAssetAuthorizationResponses:(id)a0;
- (void)clearThrottleConfigs;
- (unsigned long long)assetAuthorizationResponsesCount;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addThrottleConfig:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearAssetAuthorizationResponses;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)throttleConfigAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;

@end
