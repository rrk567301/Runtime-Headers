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

- (id)description;
- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)valueForProperty:(id)a0;
- (id)releaseDate;
- (id)itemKind;
- (id)buyParameters;
- (id)mediaKind;
- (id)collectionName;
- (id)priceDisplay;
- (id)initWithItemDictionary:(id)a0;
- (id)rawItemDictionary;
- (id)sendGiftURL;
- (id)viewReviewsURL;
- (id)_tellAFriendDictionary;

@end
