@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *assetAuthorizationResponses;
@property (retain, nonatomic) NSMutableArray *throttleConfigs;

+ (Class)assetAuthorizationResponsesType;
+ (Class)throttleConfigType;

- (void)addThrottleConfig:(id)a0;
- (void)clearThrottleConfigs;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (id)throttleConfigAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)a0;
- (void)clearAssetAuthorizationResponses;
- (void)addAssetAuthorizationResponses:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)throttleConfigsCount;
- (unsigned long long)assetAuthorizationResponsesCount;

@end
