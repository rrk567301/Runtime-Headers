@class NSScrollView, ISNSVisibilityOffsetHelper;

@interface ISNSScrollViewVitalityController : ISScrollViewVitalityController {
    BOOL _isListeningToScrollViewNotifications;
    ISNSVisibilityOffsetHelper *_visibilityOffsetHelper;
}

@property (weak, nonatomic, setter=_setScrollView:) NSScrollView *_scrollView;

- (void)dealloc;
- (void).cxx_destruct;
- (id)visibilityOffsetHelper;
- (void)_startListeningToScrollViewNotifications;
- (void)_stopListeningToScrollViewNotifications;
- (void)_handleWillStartLiveScrollNotification:(id)a0;
- (void)_handleDidLiveScrollNotification:(id)a0;
- (void)_handleDidEndLiveScrollNotification:(id)a0;

@end
