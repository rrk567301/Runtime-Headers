@class SiriUISuggestionsView, NSString;
@protocol SVSSuggestionsViewControllerDelegate;

@interface SVSSuggestionsViewController : NSViewController <SiriUISuggestionsViewDelegate>

@property (retain, nonatomic) SiriUISuggestionsView *view;
@property (weak, nonatomic) id<SVSSuggestionsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)animateOut;
- (void)_showHeaderText:(id)a0 subheaderText:(id)a1 largeSubheaderText:(id)a2;
- (id)_initialHeaderText;
- (id)_nudgeHeaderText;
- (void)showAcousticIDSpinner;
- (void)hideAcousticIDSpinner;
- (double)statusViewHeightForSuggestionsView:(id)a0;
- (void)suggestionsView:(id)a0 didHideVibrantView:(id)a1;
- (void)showNetworkUnavailable;
- (void)showMicrophoneUnavailable;
- (void)showGreeting;
- (void)showUserNudge;
- (void)showEmptyView;
- (double)textContentHeight;

@end
