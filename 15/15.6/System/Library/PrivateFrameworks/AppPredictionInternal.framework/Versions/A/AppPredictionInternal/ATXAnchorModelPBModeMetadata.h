@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBModeMetadata : PBCodable <NSCopying> {
    struct { unsigned char relativeTimeSinceAnchorInSeconds : 1; unsigned char isStart : 1; } _has;
}

@property (readonly, nonatomic) char hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (nonatomic) char hasIsStart;
@property (nonatomic) char isStart;
@property (readonly, nonatomic) char hasModeHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *modeHistory;
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
