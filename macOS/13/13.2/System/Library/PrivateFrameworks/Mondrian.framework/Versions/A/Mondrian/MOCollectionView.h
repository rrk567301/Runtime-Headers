@interface MOCollectionView : UXCollectionView {
    BOOL _needsLiveScrollingAutomationCleanup;
    BOOL _needsScrollingScoreKeeperCleanup;
}

@property (nonatomic) BOOL isAutomating;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_automatedLiveScrollingWillBegin;
- (void)_automatedLiveScrollingDidEnd;
- (id)mediaView;
- (void)_willTerminateNotification;
- (BOOL)isScrollingScoreKeeperEnabled;
- (void)enableScrollingScoreKeeper;
- (void)disableScrollingScoreKeeper;
- (void)automateLiveScrolling;
- (void)automateLiveScrollingWithLaps:(unsigned long long)a0 andStepSize:(double)a1;
- (void)_automateLiveScrollingWithRecordingData:(id)a0;
- (void)automateLiveScrollingWithRecordingFilePath:(id)a0;
- (void)automateLiveScrollingWithRecordingPasteboardData;
- (void)cleanupLiveScrollingAutomation;
- (void)automationWillBegin;
- (void)automationDidEnd;
- (void)cleanupAutomation;

@end
