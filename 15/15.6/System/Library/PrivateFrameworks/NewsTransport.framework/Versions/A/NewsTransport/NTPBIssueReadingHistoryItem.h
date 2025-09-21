@class NSString, NTPBDate;

@interface NTPBIssueReadingHistoryItem : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) char hasIssueID;
@property (retain, nonatomic) NSString *issueID;
@property (readonly, nonatomic) char hasLastVisitedPBDate;
@property (retain, nonatomic) NTPBDate *lastVisitedPBDate;
@property (readonly, nonatomic) char hasLastVisitedArticleID;
@property (retain, nonatomic) NSString *lastVisitedArticleID;
@property (readonly, nonatomic) char hasLastVisitedPageID;
@property (retain, nonatomic) NSString *lastVisitedPageID;
@property (readonly, nonatomic) char hasLastBadgedPBDate;
@property (retain, nonatomic) NTPBDate *lastBadgedPBDate;
@property (readonly, nonatomic) char hasLastEngagedPBDate;
@property (retain, nonatomic) NTPBDate *lastEngagedPBDate;
@property (readonly, nonatomic) char hasLastRemovedFromMyMagazinesPBDate;
@property (retain, nonatomic) NTPBDate *lastRemovedFromMyMagazinesPBDate;
@property (readonly, nonatomic) char hasLastSeenPBDate;
@property (retain, nonatomic) NTPBDate *lastSeenPBDate;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
