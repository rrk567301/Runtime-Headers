@class NTPBIssueViewData, NTPBIssueData, NTPBIssueExposureData, NSString, NTPBChannelData;

@interface NTPBPDFPageView : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _pageIndices;
    struct { unsigned char groupType : 1; unsigned char pageCount : 1; unsigned char paidSubscriberToFeedType : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; unsigned char isFreeIssue : 1; unsigned char isPaidSubscriberToSourceChannel : 1; unsigned char viewFromNotificationDirectOpen : 1; } _has;
}

@property (readonly, nonatomic) char hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) char hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) char hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) unsigned long long pageIndicesCount;
@property (readonly, nonatomic) int *pageIndices;
@property (nonatomic) char hasPageCount;
@property (nonatomic) int pageCount;
@property (nonatomic) char hasIsFreeIssue;
@property (nonatomic) char isFreeIssue;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) char hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasAdSupportedChannel;
@property (nonatomic) char adSupportedChannel;
@property (nonatomic) char hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) char isPaidSubscriberToSourceChannel;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic) char hasViewFromNotificationDirectOpen;
@property (nonatomic) char viewFromNotificationDirectOpen;
@property (readonly, nonatomic) char hasNotificationId;
@property (retain, nonatomic) NSString *notificationId;
@property (readonly, nonatomic) char hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (nonatomic) char hasPaidSubscriberToFeedType;
@property (nonatomic) int paidSubscriberToFeedType;
@property (nonatomic) char hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) char hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) char hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (readonly, nonatomic) char hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPaidSubscriberToFeedType:(id)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (void)addPageIndices:(int)a0;
- (void)clearPageIndices;
- (id)groupTypeAsString:(int)a0;
- (int)pageIndicesAtIndex:(unsigned long long)a0;
- (id)paidSubscriberToFeedTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (void)setPageIndices:(int *)a0 count:(unsigned long long)a1;

@end
