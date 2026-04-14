@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBActionKeyMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasActionType;
@property (retain, nonatomic) NSString *actionType;
@property (readonly, nonatomic) BOOL hasActionKeyLaunchHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionKeyLaunchHistory;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
