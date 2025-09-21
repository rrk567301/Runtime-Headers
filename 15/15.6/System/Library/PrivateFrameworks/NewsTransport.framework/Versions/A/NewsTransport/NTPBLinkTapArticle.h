@class NSString;

@interface NTPBLinkTapArticle : PBCodable <NSCopying> {
    struct { unsigned char articleType : 1; } _has;
}

@property (readonly, nonatomic) char hasLinkUrl;
@property (retain, nonatomic) NSString *linkUrl;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (nonatomic) char hasArticleType;
@property (nonatomic) int articleType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsArticleType:(id)a0;
- (id)articleTypeAsString:(int)a0;

@end
