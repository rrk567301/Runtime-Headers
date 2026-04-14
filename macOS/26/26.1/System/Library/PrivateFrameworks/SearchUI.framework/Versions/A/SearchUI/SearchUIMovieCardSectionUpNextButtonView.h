@class SearchUIWatchListState;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView

@property (retain, nonatomic) SearchUIWatchListState *watchListState;

- (void)buttonPressed;
- (void).cxx_destruct;
- (id)initIsInUpNext:(BOOL)a0 cardSectionView:(id)a1;
- (void)updateUpNextStatus;

@end
