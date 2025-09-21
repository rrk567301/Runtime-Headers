@interface WidgetRenderer.LiveWidgetContentViewController : WidgetRenderer.BaseWidgetContentViewController {
    void /* unknown type, empty encoding */ widget;
    void /* unknown type, empty encoding */ metrics;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ _isSnapshotting;
    void /* unknown type, empty encoding */ hasAnimatableContent;
    void /* unknown type, empty encoding */ animationsPausedCancellable;
    void /* unknown type, empty encoding */ areAnimationsPaused;
    void /* unknown type, empty encoding */ _animationsDisabledPreferenceObserver;
    void /* unknown type, empty encoding */ _cachedAnimationsDisabledPreference;
    void /* unknown type, empty encoding */ _rootViewModel;
    void /* unknown type, empty encoding */ isForeground;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear;
- (void)viewWillAppear;

@end
