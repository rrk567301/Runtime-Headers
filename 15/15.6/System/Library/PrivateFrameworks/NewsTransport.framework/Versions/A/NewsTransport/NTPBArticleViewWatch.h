@class NSString;

@interface NTPBArticleViewWatch : PBCodable <NSCopying> {
    struct { unsigned char articleHostViewTypeWatch : 1; unsigned char didScroll : 1; } _has;
}

@property (nonatomic) char hasArticleHostViewTypeWatch;
@property (nonatomic) int articleHostViewTypeWatch;
@property (readonly, nonatomic) char hasArticleViewingSessionIdWatch;
@property (retain, nonatomic) NSString *articleViewingSessionIdWatch;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasDidScroll;
@property (nonatomic) char didScroll;

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
