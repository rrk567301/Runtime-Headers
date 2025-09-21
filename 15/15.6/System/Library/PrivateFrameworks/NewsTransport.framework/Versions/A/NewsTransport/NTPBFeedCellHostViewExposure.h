@class NSString;

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying> {
    struct { unsigned char areaPresentationReason : 1; unsigned char feedCellHostType : 1; unsigned char userAction : 1; unsigned char pickFavsButtonExposed : 1; } _has;
}

@property (nonatomic) char hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) char hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (readonly, nonatomic) char hasTopicFeedId;
@property (retain, nonatomic) NSString *topicFeedId;
@property (readonly, nonatomic) char hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) char hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) char hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) char hasPickFavsButtonExposed;
@property (nonatomic) char pickFavsButtonExposed;
@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAreaPresentationReason:(id)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (id)areaPresentationReasonAsString:(int)a0;
- (id)feedCellHostTypeAsString:(int)a0;

@end
