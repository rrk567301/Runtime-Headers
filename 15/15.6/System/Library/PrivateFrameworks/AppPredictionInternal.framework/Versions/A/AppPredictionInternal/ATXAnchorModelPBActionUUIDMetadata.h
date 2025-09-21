@class ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable <NSCopying> {
    struct { unsigned char actionUUID : 1; unsigned char slotHash : 1; unsigned char paramCount : 1; } _has;
}

@property (nonatomic) char hasActionUUID;
@property (nonatomic) long long actionUUID;
@property (nonatomic) char hasSlotHash;
@property (nonatomic) long long slotHash;
@property (nonatomic) char hasParamCount;
@property (nonatomic) unsigned int paramCount;
@property (readonly, nonatomic) char hasActionUUIDLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionUUIDLaunchHistory;

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

@end
