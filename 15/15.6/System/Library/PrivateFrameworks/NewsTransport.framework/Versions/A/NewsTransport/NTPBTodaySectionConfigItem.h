@class NTPBTodaySectionConfigWebEmbed, NTPBTodaySectionConfigArticle;

@interface NTPBTodaySectionConfigItem : PBCodable <NSCopying> {
    struct { unsigned char itemType : 1; } _has;
}

@property (nonatomic) char hasItemType;
@property (nonatomic) int itemType;
@property (readonly, nonatomic) char hasArticle;
@property (retain, nonatomic) NTPBTodaySectionConfigArticle *article;
@property (readonly, nonatomic) char hasWebEmbed;
@property (retain, nonatomic) NTPBTodaySectionConfigWebEmbed *webEmbed;

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
