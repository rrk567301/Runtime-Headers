@class NSString;

@interface NTPBFeedEngagementMenuExposure : PBCodable <NSCopying> {
    struct { unsigned char feedMenuType : 1; unsigned char feedType : 1; } _has;
}

@property (nonatomic) char hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) char hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) char hasFeedMenuType;
@property (nonatomic) int feedMenuType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
