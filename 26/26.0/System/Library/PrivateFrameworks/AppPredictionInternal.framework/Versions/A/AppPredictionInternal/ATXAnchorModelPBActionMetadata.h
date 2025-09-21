@class ATXAnchorModelPBActionKeyMetadata, NSMutableArray, ATXAnchorModelPBAppLaunchMetadata;

@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying> {
    struct { unsigned char actionType : 1; } _has;
}

@property (nonatomic) BOOL hasActionType;
@property (nonatomic) int actionType;
@property (readonly, nonatomic) BOOL hasAppLaunchMetadata;
@property (retain, nonatomic) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata;
@property (readonly, nonatomic) BOOL hasActionKeyMetadata;
@property (retain, nonatomic) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata;
@property (retain, nonatomic) NSMutableArray *actionUUIDMetadatas;

+ (Class)actionUUIDMetadataType;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)actionTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (int)StringAsActionType:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)actionUUIDMetadataAtIndex:(unsigned long long)a0;
- (unsigned long long)actionUUIDMetadatasCount;
- (void)addActionUUIDMetadata:(id)a0;
- (void)clearActionUUIDMetadatas;

@end
