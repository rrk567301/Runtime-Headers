@class NSString, ATXPBBlendingSessionDeviceContext, NSMutableArray, ATXPBBlendingSessionUICache;

@interface ATXPBBlendingSessionBlendingUpdate : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasBlendingUpdateUUID;
@property (retain, nonatomic) NSString *blendingUpdateUUID;
@property (readonly, nonatomic) char hasBlendingABGroup;
@property (retain, nonatomic) NSString *blendingABGroup;
@property (readonly, nonatomic) char hasConsumerSubType;
@property (retain, nonatomic) NSString *consumerSubType;
@property (readonly, nonatomic) char hasDeviceContext;
@property (retain, nonatomic) ATXPBBlendingSessionDeviceContext *deviceContext;
@property (retain, nonatomic) NSMutableArray *clientModelUpdates;
@property (readonly, nonatomic) char hasUiCache;
@property (retain, nonatomic) ATXPBBlendingSessionUICache *uiCache;

+ (Class)clientModelUpdateType;

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
- (void)addClientModelUpdate:(id)a0;
- (void)clearClientModelUpdates;
- (id)clientModelUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)clientModelUpdatesCount;

@end
