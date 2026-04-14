@class NSTextField, NSString, NSView, NSArray, SGSuggestionStore, NSButton, NSViewController;

@interface SGSuggestionsPagingPopoverViewController : NSViewController <NSPageControllerDelegate> {
    NSViewController *_currentSuggestionViewController;
}

@property (nonatomic) NSView *containerView;
@property (nonatomic) NSButton *prevButton;
@property (nonatomic) NSButton *nextButton;
@property (nonatomic) NSTextField *pagingTitleView;
@property (readonly, nonatomic) BOOL hasPreviousSuggestion;
@property (readonly, nonatomic) BOOL hasNextSuggestion;
@property (readonly, nonatomic) NSString *pagingTitle;
@property (readonly, nonatomic) NSArray *suggestions;
@property (nonatomic) long long currentSuggestionIndex;
@property (retain, nonatomic) SGSuggestionStore *suggestionStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyPathsForValuesAffectingPagingUI;
+ (id)keyPathsForValuesAffectingPagingTitle;
+ (id)keyPathsForValuesAffectingHasNextSuggestion;
+ (id)keyPathsForValuesAffectingHasPreviousSuggestion;

- (void)dealloc;
- (void).cxx_destruct;
- (id)nibBundle;
- (void)viewDidLoad;
- (void)listDidChangeNotification:(id)a0;
- (void)_updateSuggestion;
- (id)viewControllerForItemAtIndex:(unsigned long long)a0;
- (void)nextSuggestion:(id)a0;
- (void)prevSuggestion:(id)a0;
- (void)cycleSuggestion;

@end
