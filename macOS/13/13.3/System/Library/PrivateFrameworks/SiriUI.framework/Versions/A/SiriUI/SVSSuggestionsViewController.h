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
- (void)animateOut;
- (void)loadView;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)_initialHeaderText;
- (id)_nudgeHeaderText;
- (void)_showHeaderText:(id)a0 subheaderText:(id)a1 largeSubheaderText:(id)a2;
- (void)hideAcousticIDSpinner;
- (void)showAcousticIDSpinner;
- (void)showEmptyView;
- (void)showGreeting;
- (void)showMicrophoneUnavailable;
- (void)showNetworkUnavailable;
- (void)showUserNudge;
- (double)statusViewHeightForSuggestionsView:(id)a0;
- (void)suggestionsView:(id)a0 didHideVibrantView:(id)a1;
- (double)textContentHeight;

@end
