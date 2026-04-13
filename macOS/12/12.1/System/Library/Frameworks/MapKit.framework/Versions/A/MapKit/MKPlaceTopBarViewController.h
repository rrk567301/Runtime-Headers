@class NSButton, _MKPlaceViewController;
@protocol MKPlaceCardActionControllerDelegate;

@interface MKPlaceTopBarViewController : NSViewController

@property (retain, nonatomic) NSButton *favoriteButton;
@property (retain, nonatomic) NSButton *shareButton;
@property (nonatomic, getter=isFavorited) BOOL favorited;
@property (nonatomic) BOOL hideFavorites;
@property (weak, nonatomic) _MKPlaceViewController *owner;
@property (weak, nonatomic) id<MKPlaceCardActionControllerDelegate> actionDelegate;

- (void).cxx_destruct;
- (void)loadView;
- (void)share:(id)a0;
- (void)toggleFavorite:(id)a0;
- (id)_buttonWithAction:(SEL)a0 text:(id)a1 image:(id)a2;
- (void)addContact:(id)a0;

@end
