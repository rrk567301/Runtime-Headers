@class NTPBIssueViewData, NSString, NTPBIssueData, NSData;

@interface NTPBArticleEngagement : PBCodable <NSCopying> {
    struct { unsigned char articleOpenedAtTimestamp : 1; unsigned char eventTimestamp : 1; unsigned char articleEngagementType : 1; unsigned char utcOffset : 1; unsigned char isPaidSubscriber : 1; } _has;
}

@property (nonatomic) char hasArticleEngagementType;
@property (nonatomic) int articleEngagementType;
@property (readonly, nonatomic) char hasSessionId;
@property (retain, nonatomic) NSData *sessionId;
@property (readonly, nonatomic) char hasUserId;
@property (retain, nonatomic) NSString *userId;
@property (nonatomic) char hasEventTimestamp;
@property (nonatomic) long long eventTimestamp;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasChannelId;
@property (retain, nonatomic) NSString *channelId;
@property (nonatomic) char hasUtcOffset;
@property (nonatomic) int utcOffset;
@property (readonly, nonatomic) char hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) char hasArticleOpenedAtTimestamp;
@property (nonatomic) long long articleOpenedAtTimestamp;
@property (nonatomic) char hasIsPaidSubscriber;
@property (nonatomic) char isPaidSubscriber;
@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) char hasDeviceModel;
@property (retain, nonatomic) NSString *deviceModel;

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
