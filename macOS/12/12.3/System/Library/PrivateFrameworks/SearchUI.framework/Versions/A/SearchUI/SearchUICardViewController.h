@class SFCard, NSTimer, NSProgressIndicator, SearchUICardTableViewController, SearchUIBackgroundView, NUIContainerBoxView, NSSearchField, TLKLabel;
@protocol SearchUICardViewDelegate, SFFeedbackListener;

@interface SearchUICardViewController : NSViewController

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) NSProgressIndicator *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) SearchUICardTableViewController *tableViewController;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (readonly, nonatomic) BOOL topRowWillFillBackgroundWithContent;
@property (nonatomic) BOOL disableNextCards;
@property (nonatomic) BOOL selectOnHover;
@property (nonatomic) BOOL floatingHeaders;
@property (weak, nonatomic) NSSearchField *searchField;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)restoreSelection;
- (void)saveSelection;
- (double)contentHeightForWidth:(double)a0;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (void)prepareLoadingView;
- (void)displayLoadingViewAfterDelay:(double)a0 withSpinner:(BOOL)a1;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;
- (BOOL)hasCustomViewControllersForCardSections;
- (void)cardViewDidAppear;
- (BOOL)selectNextRowByCategory:(BOOL)a0 forward:(BOOL)a1;
- (BOOL)performActionForSelectedRow;
- (BOOL)selectFirstSelectableRow;
- (BOOL)selectCardSection:(id)a0;
- (id)selectedCardSection;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;

@end
