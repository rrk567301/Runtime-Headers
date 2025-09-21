@class NSString;

@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying>

@property (readonly, nonatomic) char hasArticleID;
@property (retain, nonatomic) NSString *articleID;
@property (readonly, nonatomic) char hasDisplayDateString;
@property (retain, nonatomic) NSString *displayDateString;
@property (readonly, nonatomic) char hasStoryType;
@property (retain, nonatomic) NSString *storyType;
@property (readonly, nonatomic) char hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) char hasPaidArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *paidArticle;
@property (readonly, nonatomic) char hasActionURLString;
@property (retain, nonatomic) NSString *actionURLString;

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
