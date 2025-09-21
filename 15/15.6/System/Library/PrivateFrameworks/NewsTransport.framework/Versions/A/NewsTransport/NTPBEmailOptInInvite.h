@class NSString;

@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {
    struct { unsigned char emailOptInInviteLocation : 1; unsigned char newsletterSubscriptionType : 1; unsigned char parentFeedType : 1; unsigned char userAction : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasEmailOptInInviteLocation;
@property (nonatomic) int emailOptInInviteLocation;
@property (nonatomic) char hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) char hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) char hasNewsletterSubscriptionType;
@property (nonatomic) int newsletterSubscriptionType;

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
