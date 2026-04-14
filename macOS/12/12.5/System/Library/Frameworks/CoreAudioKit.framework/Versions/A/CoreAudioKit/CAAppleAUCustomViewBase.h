@class NSTextField, NSView, NSTimer, NSGradient, NSDictionary, NSLayoutConstraint, NSButton, CAAppleAUGraphView;

@interface CAAppleAUCustomViewBase : NSView <AUCustomViewPersistentData> {
    CAAppleAUGraphView *graphView;
    struct OpaqueAudioComponentInstance { } *mAU;
    struct AUListenerBase { } *mAUEventListener;
    NSTextField *detailsLabel;
    NSButton *detailsButton;
    NSView *detailsView;
    NSLayoutConstraint *detailsViewVerticalHeightConstraint;
    double detailsViewHeight;
    BOOL auRendering;
    double lastRenderedSampleTime;
    BOOL initialized;
    NSGradient *backgroundGradient;
    NSGradient *blueGradient;
    NSDictionary *cachedPersistantViewData;
    NSDictionary *cachedGenericViewData;
    NSTimer *meterTimer;
}

@property BOOL drawsBackground;
@property BOOL hasDetails;
@property BOOL detailsDefaultsToOpen;
@property BOOL needsRealtimeDrawing;
@property double realtimeDrawingInterval;
@property (nonatomic) NSDictionary *customViewPersistentData;

- (void)dealloc;
- (void)cleanup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)initializeView;
- (void)priv_eventListener:(void *)a0 event:(const struct AudioUnitEvent { unsigned int x0; union { struct AudioUnitParameter { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x0; struct AudioUnitProperty { struct OpaqueAudioComponentInstance *x0; unsigned int x1; unsigned int x2; unsigned int x3; } x1; } x1; } *)a1 value:(float)a2;
- (void)priv_removeListeners;
- (void)toggleDetails:(id)a0;
- (void)checkLastRenderedTime:(id)a0;
- (void)doRealtimeDrawing;
- (void)prepareData;
- (void)registerParameters;
- (void)synchronizeUIWithParameterValues;
- (void)updateViewWithPersistentData:(id)a0;
- (id)excludedParams;
- (id)includedParams;
- (id)joinedClumps;
- (BOOL)showExpertParams;
- (void)detailsViewSizeChanged:(id)a0;
- (void)handleParameterListChanged;
- (void)handleBeginGesture:(unsigned int)a0;
- (void)handleEndGesture:(unsigned int)a0;
- (void)realtimeDrawingInterval:(double)a0;
- (void)setAU:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)priv_addListenerForParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (void)priv_removeListenerForParameter:(unsigned int)a0 scope:(unsigned int)a1 element:(unsigned int)a2;
- (void)postBeginGestureNotificationForParameter:(unsigned int)a0;
- (void)postEndGestureNotificationForParameter:(unsigned int)a0;

@end
