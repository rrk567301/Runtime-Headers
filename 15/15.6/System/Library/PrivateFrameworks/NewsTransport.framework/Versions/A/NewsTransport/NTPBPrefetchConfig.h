@interface NTPBPrefetchConfig : PBCodable <NSCopying> {
    struct { unsigned char backgroundFetchMinimumInterval : 1; unsigned char feedPrefetchFavoritesLimit : 1; unsigned char prefetchedForYouExpiration : 1; unsigned char backgroundFetchEnabled : 1; unsigned char backgroundFetchEnabled2 : 1; unsigned char feedPrefetchForYou : 1; } _has;
}

@property (nonatomic) char hasBackgroundFetchEnabled;
@property (nonatomic) char backgroundFetchEnabled;
@property (nonatomic) char hasBackgroundFetchMinimumInterval;
@property (nonatomic) double backgroundFetchMinimumInterval;
@property (nonatomic) char hasFeedPrefetchForYou;
@property (nonatomic) char feedPrefetchForYou;
@property (nonatomic) char hasFeedPrefetchFavoritesLimit;
@property (nonatomic) long long feedPrefetchFavoritesLimit;
@property (nonatomic) char hasBackgroundFetchEnabled2;
@property (nonatomic) char backgroundFetchEnabled2;
@property (nonatomic) char hasPrefetchedForYouExpiration;
@property (nonatomic) long long prefetchedForYouExpiration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
