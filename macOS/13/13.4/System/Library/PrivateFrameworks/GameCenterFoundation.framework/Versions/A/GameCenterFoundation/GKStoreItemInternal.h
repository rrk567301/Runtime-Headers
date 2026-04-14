@class NSString, NSURL, NSDate, NSNumber;

@interface GKStoreItemInternal : GKInternalRepresentation

@property (retain, nonatomic) NSNumber *adamID;
@property (retain, nonatomic) NSString *artistName;
@property (retain, nonatomic) NSString *priceDisplay;
@property (retain, nonatomic) NSURL *viewItemURL;
@property (retain, nonatomic) NSURL *shortViewItemURL;
@property (retain, nonatomic) NSURL *tellAFriendMessageContentsUrl;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) unsigned int numberOfUserRatings;
@property (nonatomic) float averageUserRating;
@property (nonatomic) BOOL owned;

+ (id)secureCodedPropertyKeys;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)storeItemURLForGamePlatform:(long long)a0 withContext:(id)a1 withHandler:(id /* block */)a2;
- (id)storeItemURLForURL:(id)a0 gamePlatform:(long long)a1 extraQueryParams:(id)a2;

@end
