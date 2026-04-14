@interface MOCollectionView : UXCollectionView {
    BOOL _needsLiveScrollingAutomationCleanup;
    BOOL _needsScrollingScoreKeeperCleanup;
}

@property (nonatomic) BOOL isAutomating;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_automatedLiveScrollingDidEnd;
- (void)_automatedLiveScrollingWillBegin;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mediaView;
- (void)_willTerminateNotification;
- (void)_automateLiveScrollingWithRecordingData:(id)a0;
- (void)automateLiveScrolling;
- (void)automateLiveScrollingWithLaps:(unsigned long long)a0 andStepSize:(double)a1;
- (void)automateLiveScrollingWithRecordingFilePath:(id)a0;
- (void)automateLiveScrollingWithRecordingPasteboardData;
- (void)automationDidEnd;
- (void)automationWillBegin;
- (void)cleanupAutomation;
- (void)cleanupLiveScrollingAutomation;
- (void)disableScrollingScoreKeeper;
- (void)enableScrollingScoreKeeper;
- (BOOL)isScrollingScoreKeeperEnabled;

@end
