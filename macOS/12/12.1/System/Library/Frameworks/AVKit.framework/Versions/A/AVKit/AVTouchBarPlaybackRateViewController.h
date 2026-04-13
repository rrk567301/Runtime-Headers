@class NSArray;
@protocol AVTouchBarPlaybackRateSelectionDelegate;

@interface AVTouchBarPlaybackRateViewController : NSViewController {
    double _currentPlaybackRate;
}

@property (retain) NSArray *rateButtons;
@property (weak) id<AVTouchBarPlaybackRateSelectionDelegate> delegate;
@property double currentPlaybackRate;
@property (retain) NSArray *supportedPlaybackRates;

- (void).cxx_destruct;
- (void)loadView;
- (void)highlightButtonForCurrentPlaybackRate;
- (void)rateButtonPressed:(id)a0;

@end
