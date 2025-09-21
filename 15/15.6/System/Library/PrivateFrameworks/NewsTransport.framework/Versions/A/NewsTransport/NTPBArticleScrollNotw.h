@class NSString;

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {
    struct { unsigned char maxScrollDepth : 1; } _has;
}

@property (nonatomic) char hasMaxScrollDepth;
@property (nonatomic) float maxScrollDepth;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (readonly, nonatomic) char hasWindowId;
@property (retain, nonatomic) NSString *windowId;

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
