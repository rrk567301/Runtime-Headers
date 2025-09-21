@class NSString, ATXPBSharedDigestEngagementTrackingMetrics, NSMutableArray, ATXPBDigestTimeline;

@interface ATXPBMissedNotificationRanking : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char timestamp : 1; } _has;
}

@property (nonatomic) char hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString *uuid;
@property (readonly, nonatomic) char hasRankerId;
@property (retain, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) char hasModeId;
@property (retain, nonatomic) NSString *modeId;
@property (retain, nonatomic) NSMutableArray *rankedGroups;
@property (readonly, nonatomic) char hasSharedEngagementTracker;
@property (retain, nonatomic) ATXPBSharedDigestEngagementTrackingMetrics *sharedEngagementTracker;
@property (readonly, nonatomic) char hasDigestTimeline;
@property (retain, nonatomic) ATXPBDigestTimeline *digestTimeline;

+ (Class)rankedGroupsType;

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
- (id)jsonRepresentation;
- (void)addRankedGroups:(id)a0;
- (void)clearRankedGroups;
- (id)initFromJSON:(id)a0;
- (id)rankedGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)rankedGroupsCount;

@end
