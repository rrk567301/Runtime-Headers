@class NSString, NSMutableArray;

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {
    struct { unsigned char badgesTimeout : 1; unsigned char cutoffTime : 1; unsigned char maximumArticleCount : 1; unsigned char pinningEnabled : 1; unsigned char promotingEnabled : 1; } _has;
}

@property (nonatomic) char hasPinningEnabled;
@property (nonatomic) char pinningEnabled;
@property (nonatomic) char hasPromotingEnabled;
@property (nonatomic) char promotingEnabled;
@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) char hasMaximumArticleCount;
@property (nonatomic) long long maximumArticleCount;
@property (nonatomic) char hasCutoffTime;
@property (nonatomic) long long cutoffTime;
@property (retain, nonatomic) NSMutableArray *styleConfigs;
@property (nonatomic) char hasBadgesTimeout;
@property (nonatomic) long long badgesTimeout;

+ (Class)styleConfigsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addStyleConfigs:(id)a0;
- (void)clearStyleConfigs;
- (id)styleConfigsAtIndex:(unsigned long long)a0;
- (unsigned long long)styleConfigsCount;

@end
