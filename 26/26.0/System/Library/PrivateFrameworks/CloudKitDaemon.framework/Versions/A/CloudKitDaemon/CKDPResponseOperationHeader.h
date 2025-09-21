@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)clearThrottleConfigs;
- (void)mergeFrom:(id)a0;
- (void)clearAssetAuthorizationResponses;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addAssetAuthorizationResponses:(id)a0;
- (id)throttleConfigAtIndex:(unsigned long long)a0;
- (unsigned long long)assetAuthorizationResponsesCount;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (void)addThrottleConfig:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)throttleConfigsCount;

@end
