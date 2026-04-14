@class NSImageView, LAContext, NSOcclusionDetectionView, LAUIPKGlyphWrapper, NSMutableArray;

@interface LAAuthenticationView : NSView <LAUIDelegate> {
    BOOL _viewOccluded;
    BOOL _touchIDRunning;
    BOOL _watchRunning;
    long long _lastSuccess;
    long long _kofnK;
}

@property (readonly, nonatomic) LAUIPKGlyphWrapper *glyphWrapper;
@property (readonly, nonatomic) NSImageView *imageView;
@property (readonly, nonatomic) NSOcclusionDetectionView *occlusionDetectionView;
@property (nonatomic) BOOL success;
@property (nonatomic) BOOL authenticationPaused;
@property (readonly, nonatomic) BOOL isVisibleToUser;
@property (readonly, nonatomic) NSMutableArray *kvoViewsHidden;
@property (nonatomic) BOOL kvoObservingAlphaValue;
@property (readonly, nonatomic) LAContext *context;
@property (readonly, nonatomic) unsigned long long controlSize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidMoveToSuperview;
- (id)_notifications;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)_setGlyphState:(long long)a0;
- (void)_addDimensionsConstraintsForControlSize:(unsigned long long)a0;
- (void)_addNotifications;
- (void)_anyEventWithParams:(id)a0;
- (void)_checkOcclusionDetectionView;
- (void)_pauseOrResumeAuthenticationWithDescription:(id)a0;
- (void)_removeNotifications:(BOOL)a0;
- (void)_setGlyphState:(long long)a0 animated:(BOOL)a1;
- (void)_showWatch;
- (void)_succeed:(BOOL)a0;
- (void)_touchIDEventWithParams:(id)a0;
- (void)_uiNotification:(id)a0;
- (void)_watchEventWithParams:(id)a0;
- (double)_widthForControlSize:(unsigned long long)a0;
- (id)initWithContext:(id)a0 controlSize:(unsigned long long)a1;

@end
