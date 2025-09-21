@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBLinkActionMetadata : PBCodable <NSCopying> {
    struct { unsigned char relativeTimeSinceAnchorInSeconds : 1; } _has;
}

@property (readonly, nonatomic) char hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) char hasActionId;
@property (retain, nonatomic) NSString *actionId;
@property (readonly, nonatomic) char hasActionHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionHistory;
@property (nonatomic) char hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

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
