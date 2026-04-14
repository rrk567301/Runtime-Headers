@class NSString, NSArray, NSURL, NSDictionary, NSNumber;

@interface CKItem : NSObject {
    NSDictionary *_properties;
}

@property (readonly, nonatomic) NSNumber *ITunesStoreIdentifier;
@property (readonly, nonatomic) NSString *developerName;
@property (readonly, nonatomic) NSString *itemTitle;
@property (readonly, nonatomic) NSURL *viewItemURL;
@property (readonly, nonatomic) float averageUserRating;
@property (readonly, nonatomic) long long numberOfUserRatings;
@property (readonly, nonatomic) NSArray *thumbnailImages;

- (id)bundleVersion;
- (id)releaseDate;
- (id)buyParameters;
- (id)description;
- (void).cxx_destruct;
- (id)collectionName;
- (id)bundleIdentifier;
- (id)valueForProperty:(id)a0;
- (id)mediaKind;
- (id)itemKind;
- (id)_tellAFriendDictionary;
- (id)initWithItemDictionary:(id)a0;
- (id)priceDisplay;
- (id)rawItemDictionary;
- (id)sendGiftURL;
- (id)viewReviewsURL;

@end
