@class NSString;

@interface VideosUI.LivePostPlayTemplateViewController : VideosUI.StackTemplateController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ loggingIdentifier;
    void /* unknown type, empty encoding */ gameEndAutoPlayTimerDuration;
    void /* unknown type, empty encoding */ gameEndPlaybackPrefetchTimerDuration;
    void /* unknown type, empty encoding */ broadcastEndAutoPlayTimerDuration;
    void /* unknown type, empty encoding */ broadcastEndPlaybackPrefetchTimerDuration;
    void /* unknown type, empty encoding */ countdownProgressView;
    void /* unknown type, empty encoding */ countdownProgressViewProtectionView;
    void /* unknown type, empty encoding */ countdownProgressViewCell;
    void /* unknown type, empty encoding */ countdownProgressViewSize;
    void /* unknown type, empty encoding */ countdownProgressViewLineWidth;
    void /* unknown type, empty encoding */ countdownProgressViewColor;
    void /* unknown type, empty encoding */ countdownProgressViewImage;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ logger;
}

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;

@end
