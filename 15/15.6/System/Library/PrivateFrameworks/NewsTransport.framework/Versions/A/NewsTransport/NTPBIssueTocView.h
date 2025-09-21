@class NTPBIssueViewData, NTPBIssueData, NTPBIssueExposureData, NSString;

@interface NTPBIssueTocView : PBCodable <NSCopying> {
    struct { unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; } _has;
}

@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) char hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasAdSupportedChannel;
@property (nonatomic) char adSupportedChannel;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (id)parentFeedTypeAsString:(int)a0;

@end
