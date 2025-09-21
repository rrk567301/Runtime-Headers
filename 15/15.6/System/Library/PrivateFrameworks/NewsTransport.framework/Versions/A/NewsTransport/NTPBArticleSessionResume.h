@class NSString, NSData;

@interface NTPBArticleSessionResume : PBCodable <NSCopying> {
    struct { unsigned char publisherArticleVersion : 1; unsigned char articleType : 1; } _has;
}

@property (readonly, nonatomic) char hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (nonatomic) char hasArticleType;
@property (nonatomic) int articleType;
@property (readonly, nonatomic) char hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) char hasPublisherArticleVersion;
@property (nonatomic) long long publisherArticleVersion;
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
- (int)StringAsArticleType:(id)a0;
- (id)articleTypeAsString:(int)a0;

@end
