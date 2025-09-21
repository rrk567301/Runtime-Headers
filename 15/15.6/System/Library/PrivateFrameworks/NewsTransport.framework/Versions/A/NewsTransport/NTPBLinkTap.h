@class NSString, NSData;

@interface NTPBLinkTap : PBCodable <NSCopying> {
    struct { unsigned char groupType : 1; unsigned char linkType : 1; unsigned char tapLocationType : 1; unsigned char webEmbedLocation : 1; } _has;
}

@property (nonatomic) char hasTapLocationType;
@property (nonatomic) int tapLocationType;
@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) char hasReferencedArticleId;
@property (retain, nonatomic) NSString *referencedArticleId;
@property (readonly, nonatomic) char hasTappedLinkUrl;
@property (retain, nonatomic) NSString *tappedLinkUrl;
@property (readonly, nonatomic) char hasWebEmbedId;
@property (retain, nonatomic) NSString *webEmbedId;
@property (nonatomic) char hasWebEmbedLocation;
@property (nonatomic) int webEmbedLocation;
@property (nonatomic) char hasLinkType;
@property (nonatomic) int linkType;
@property (nonatomic) char hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) char hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsWebEmbedLocation:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (id)groupTypeAsString:(int)a0;
- (id)webEmbedLocationAsString:(int)a0;

@end
