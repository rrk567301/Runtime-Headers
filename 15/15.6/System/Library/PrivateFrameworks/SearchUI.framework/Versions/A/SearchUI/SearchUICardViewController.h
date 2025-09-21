@class SFCard, NSTimer, NSString, NSSearchField, SearchUIBackgroundView, SearchUILoadingView, NSViewController, SearchUIBackgroundColorView;
@protocol SearchUICommandDelegate, SFFeedbackListener, SearchUINSCardTableBridgingProtocol, SearchUICardViewDelegate;

@interface SearchUICardViewController : NSViewController <SearchUIBackgroundColorProtocol, SearchUIBackgroundColorViewProtocol>

@property (retain, nonatomic) SearchUIBackgroundView *view;
@property (retain, nonatomic) SearchUIBackgroundColorView *colorView;
@property (retain, nonatomic) SearchUILoadingView *loadingView;
@property (retain, nonatomic) NSTimer *loadingScreenTimer;
@property (nonatomic) double initialPreviewPlatterHeight;
@property (nonatomic) char hasFocusableElements;
@property (retain, nonatomic) NSViewController<SearchUINSCardTableBridgingProtocol> *tableViewController;
@property (nonatomic, getter=isInPreviewPlatter) char inPreviewPlatter;
@property (nonatomic) unsigned long long level;
@property (nonatomic) char selectionShouldFillWidth;
@property (nonatomic) char disableEmphasizedSelection;
@property (retain, nonatomic) SFCard *card;
@property (weak, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<SearchUICardViewDelegate> delegate;
@property (weak, nonatomic) id<SearchUICommandDelegate> commandDelegate;
@property (readonly, nonatomic) char topRowWillFillBackgroundWithContent;
@property (nonatomic) char scrollEnabled;
@property (nonatomic) char shouldDrawBackgroundColor;
@property (nonatomic) char dragInteractionEnabled;
@property (nonatomic) char disableNextCards;
@property (nonatomic) char selectOnHover;
@property (nonatomic) char floatingHeaders;
@property (nonatomic) char singleClickExecutesCommands;
@property (weak, nonatomic) NSSearchField *searchField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_loadAndEnrichCardSectionsFromCard:(id)a0 withCompletionHandler:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)updateBackgroundColor;
- (char)restoreSelection;
- (void)saveSelection;
- (double)contentHeightForWidth:(double)a0;
- (char)hasFocusableElementsInSnapshot:(id)a0;
- (void)cardViewDidAppear;
- (void)displayLoadingViewAfterDelay:(double)a0;
- (char)hasCustomViewControllersForCardSections;
- (id)initWithCard:(id)a0 feedbackListener:(id)a1;
- (id)initWithCard:(id)a0 style:(unsigned long long)a1 feedbackListener:(id)a2;
- (char)performActionForSelectedRow;
- (void)prepareLoadingView;
- (id)searchUIBackgroundColor;
- (char)selectCardSection:(id)a0;
- (char)selectFirstSelectableRow;
- (char)selectNextRowByCategory:(char)a0 forward:(char)a1;
- (id)selectedCardSection;
- (void)setShouldUseInsetRoundedSections:(char)a0;
- (char)shouldUseInsetRoundedSections;
- (void)updateTimerAndCardSections:(id)a0;
- (void)updateWithCardSections:(id)a0;
- (id)viewContainingContent;

@end
