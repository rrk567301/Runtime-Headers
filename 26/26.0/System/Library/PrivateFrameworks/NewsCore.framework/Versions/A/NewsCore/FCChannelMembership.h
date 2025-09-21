@class NSString, FCInterestToken, NTPBChannelMembershipRecord;

@interface FCChannelMembership : NSObject

@property (retain, nonatomic) NTPBChannelMembershipRecord *record;
@property (retain, nonatomic) FCInterestToken *interestToken;
@property (readonly, nonatomic) NSString *channelID;
@property (readonly, nonatomic) BOOL isAllowedToSeeDrafts;
@property (readonly, nonatomic) NSString *draftArticleListID;
@property (readonly, nonatomic) NSString *draftIssueListID;

- (id)initWithRecord:(id)a0 interestToken:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
