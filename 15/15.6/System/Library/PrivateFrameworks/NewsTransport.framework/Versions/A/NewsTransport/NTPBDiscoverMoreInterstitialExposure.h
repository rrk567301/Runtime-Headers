@class NSString;

@interface NTPBDiscoverMoreInterstitialExposure : PBCodable <NSCopying> {
    struct { unsigned char nextArticleAffordanceType : 1; unsigned char userAction : 1; unsigned char withNextArticleAffordance : 1; } _has;
}

@property (nonatomic) char hasUserAction;
@property (nonatomic) int userAction;
@property (nonatomic) char hasWithNextArticleAffordance;
@property (nonatomic) char withNextArticleAffordance;
@property (nonatomic) char hasNextArticleAffordanceType;
@property (nonatomic) int nextArticleAffordanceType;
@property (readonly, nonatomic) char hasTappedNextArticleAffordanceFeedId;
@property (retain, nonatomic) NSString *tappedNextArticleAffordanceFeedId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsNextArticleAffordanceType:(id)a0;
- (id)nextArticleAffordanceTypeAsString:(int)a0;

@end
