@class NSTimer, NSProgressIndicator, SFCard, NSSearchField, SearchUIBackgroundView, NUIContainerBoxView, NSViewController, TLKLabel;
@protocol SearchUICommandDelegate, SFFeedbackListener, SearchUINSCardTableBridgingProtocol, SearchUICardViewDelegate;

@interface SearchUICardViewController : NSViewController

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) NUIContainerBoxView *loadingView;
@property (retain, nonatomic) NSProgressIndicator *loadingSpinner;
@property (retain, nonatomic) TLKLabel *loadingLabel;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (retain, nonatomic) NSViewController<SearchUINSCardTableBridgingProtocol> *tableViewController;
@property (nonatomic) BOOL shouldUseInsetRoundedSections;
@property (nonatomic, getter=isInPreviewPlatter) BOOL inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
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
- (void)cardViewDidAppear;
- (void)displayLoadingViewAfterDelay:(double)a0 withSpinner:(BOOL)a1;
- (BOOL)hasCustomViewControllersForCardSections;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (BOOL)performActionForSelectedRow;
- (void)prepareLoadingView;
- (BOOL)selectCardSection:(id)a0;
- (BOOL)selectFirstSelectableRow;
- (BOOL)selectNextRowByCategory:(BOOL)a0 forward:(BOOL)a1;
- (id)selectedCardSection;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;

@end
