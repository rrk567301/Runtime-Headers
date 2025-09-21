@class NSString;

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying> {
    struct { unsigned char articleVersion : 1; unsigned char needsSeenStateTracking : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (nonatomic) char hasArticleVersion;
@property (nonatomic) long long articleVersion;
@property (nonatomic) char hasNeedsSeenStateTracking;
@property (nonatomic) char needsSeenStateTracking;
@property (readonly, nonatomic) char hasChannelID;
@property (retain, nonatomic) NSString *channelID;
@property (readonly, nonatomic) char hasPreseenCountTrackingIdentifier;
@property (retain, nonatomic) NSString *preseenCountTrackingIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
