@class InputView, NSPanel, NSArray, NSScrollView, NSCollectionViewItem, NSVisualEffectView, NSArrayController, NSMutableArray, NSCollectionView;
@protocol HUDDataSource;

@interface HUDController : NSObject <TSMMessageProtocol> {
    NSArray *inputs;
    NSCollectionViewItem *ibCollectionViewItem;
    InputView *templateView;
    InputView *largeTemplateView;
    InputView *mediumTemplateView;
    InputView *smallMediumTemplateView;
    InputView *smallTemplateView;
    InputView *extraSmallTemplateView;
    InputView *tinyTemplateView;
    NSScrollView *containingScrollView;
    NSVisualEffectView *visualEffectView;
    id<HUDDataSource> dataSource;
    NSArrayController *inputsController;
    NSMutableArray *recentInputs;
}

@property (retain) NSArray *inputs;
@property long long inputsCount;
@property (readonly) NSPanel *inputsWindow;
@property (retain) NSArray *sortedInputs;
@property (readonly) NSCollectionView *ibCollectionView;
@property double cachedFrameHeight;
@property double cachedPointSize;
@property double cachedTextFieldFrameHeight;

- (void)dealloc;
- (id)init;
- (void)setSelectionIndex:(long long)a0;
- (void)awakeFromNib;
- (void)selectionChanged:(id)a0;
- (void)setRecentInputs:(id)a0;
- (id)recentInputs;
- (void)replyReceiver:(int)a0 withInfo:(id)a1;
- (struct __CFData { } *)copyMessageReceiver:(int)a0 withInfo:(id)a1;
- (id)arrangeInputSourcesInHistoricalUsageOrder:(id)a0;
- (id)_findView:(long long)a0 contentFrameHeight:(double)a1;
- (void)determineMaxWidth:(id)a0 forInputSources:(id)a1;
- (void)fillContent:(id)a0;
- (BOOL)inputsWindowVisible;
- (void)showInputsWindow;
- (void)prepareInputsSelectionWindow;
- (long long)currentKeyboardInputIndex;
- (long long)indexForInputNamed:(id)a0;
- (void)moveSelection:(long long)a0;
- (id)inputSourceNamed:(id)a0;
- (void)commandSpace;
- (void)changeCurrentSelection;
- (void)commitSelection;
- (void)hideInputsWindow;
- (void)hotKeyUp:(id)a0;
- (void)hotKeyDown:(id)a0;

@end
