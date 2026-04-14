@class SVSErrorMessageView;

@interface SVSErrorMessageViewController : NSViewController

@property (retain) SVSErrorMessageView *view;

- (void)loadView;
- (double)contentHeight;
- (void)showNetworkUnavailable;
- (void)showEmptyView;
- (void)showMicrophoneUnavailableWithExplanation:(id)a0;
- (void)showNoSoundWithActionBlock:(id /* block */)a0;

@end
