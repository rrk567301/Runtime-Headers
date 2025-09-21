@class SCROBrailleUIView, NSMutableArray;
@protocol SCROBrailleUIDisplayManagerSpeechDelegate;

@interface SCROBrailleUIDisplayManager : NSObject

@property (retain, nonatomic) NSMutableArray *lineQueue;
@property (retain, nonatomic) NSMutableArray *viewQueue;
@property (retain, nonatomic) id<SCROBrailleUIDisplayManagerSpeechDelegate> speechDelegate;
@property (readonly, nonatomic) SCROBrailleUIView *visibleView;
@property (readonly, nonatomic) BOOL isHidingViews;

+ (id)sharedManager;

- (id)init;
- (void).cxx_destruct;
- (id)_brailleUILineForCurrentBraille;
- (void)_commitDisplayedBrailleToTopMostView;
- (BOOL)_isFirstViewEqualTo:(id)a0;
- (void)_speakFocusedListItem;
- (void)_updateBrailleModel;
- (void)_updateIsHidingViews;
- (void)dismissAll;
- (void)dismissLineForView:(id)a0;
- (void)display:(id)a0 forView:(id)a1 clearAtNextDotPress:(BOOL)a2;
- (void)hideViews;
- (id)lineForView:(id)a0;
- (void)requestSpeech:(id)a0 language:(id)a1 shouldQueue:(BOOL)a2;
- (void)showFirstLineForView:(id)a0;
- (void)showLastLineForView:(id)a0;
- (void)showNextLineForView:(id)a0;
- (void)showPreviousLineForView:(id)a0;
- (void)showViews;

@end
