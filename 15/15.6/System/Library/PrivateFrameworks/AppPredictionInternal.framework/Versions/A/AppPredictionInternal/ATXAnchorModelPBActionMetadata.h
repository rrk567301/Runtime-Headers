@class ATXAnchorModelPBActionKeyMetadata, NSMutableArray, ATXAnchorModelPBAppLaunchMetadata;

@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; } _has;
}

@property (nonatomic) char hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) char hasAppLaunchMetadata;
@property (retain, nonatomic) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata;
@property (readonly, nonatomic) char hasActionKeyMetadata;
@property (retain, nonatomic) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata;
@property (retain, nonatomic) NSMutableArray *actionUUIDMetadatas;

+ (Class)actionUUIDMetadataType;

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
- (int)StringAsActionType:(id)a0;
- (id)actionTypeAsString:(int)a0;
- (id)actionUUIDMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)actionUUIDMetadatasCount;
- (void)addActionUUIDMetadata:(id)a0;
- (void)clearActionUUIDMetadatas;

@end
