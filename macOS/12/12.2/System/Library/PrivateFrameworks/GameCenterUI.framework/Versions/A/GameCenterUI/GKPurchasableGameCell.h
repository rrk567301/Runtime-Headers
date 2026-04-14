@class GKRatingView, GKStoreItemInternal, NSTextField;

@interface GKPurchasableGameCell : GKBaseGameCell

@property (retain, nonatomic) GKStoreItemInternal *storeItem;
@property (retain, nonatomic) NSTextField *developerLabel;
@property (retain, nonatomic) NSTextField *priceLabel;
@property (retain, nonatomic) GKRatingView *ratingStarsView;
@property (nonatomic) float capturedRating;
@property (retain, nonatomic) NSTextField *numberRatings;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (BOOL)canRemoveItem;
- (void)didUpdateModel;

@end
