@class _AXVCGMagicZoomWindowInfo, NSOperationQueue, NSLock, NSWindow;

@interface AXVCGMagicZoomWindow : NSObject

@property (nonatomic, getter=isVisible) char visible;
@property (readonly, nonatomic) unsigned int _mainCGSConnectionID;
@property (nonatomic) unsigned int _zoomWindowID;
@property (retain, nonatomic) NSWindow *_referenceWindow;
@property (nonatomic) char _referenceWindowCreated;
@property (readonly, nonatomic) unsigned int _zoomWindowNumber;
@property (readonly, nonatomic) unsigned int _invertColorFilterID;
@property (nonatomic) char _invertColorFilterAdded;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frameBeforeGoingFullscreen;
@property (retain, nonatomic) NSLock *_drawingLock;
@property (nonatomic) char _drawingDisabled;
@property (nonatomic) char _frameChangedWhileDrawingDisabled;
@property (nonatomic) double _previousScreenBackingScaleFactor;
@property (retain, nonatomic) _AXVCGMagicZoomWindowInfo *_lastestZoomWindowInfo;
@property (retain, nonatomic) NSOperationQueue *_zoomDrawingQueue;
@property (retain, nonatomic) NSLock *_zoomInfoLock;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) char fullscreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } zoomedRegionFrame;
@property (nonatomic) struct CGPoint { double x0; double x1; } zoomedRegionCenter;
@property (nonatomic) struct CGSize { double x0; double x1; } zoomedRegionSize;
@property (nonatomic) double zoomFactor;
@property (readonly, nonatomic) char isZoomed;
@property (nonatomic) char smoothImages;
@property (nonatomic) char invertColor;
@property (nonatomic) char keepFullyContainedWithinScreens;
@property (nonatomic) char keepZoomedRegionAndZoomWindowCentersAligned;
@property (nonatomic) unsigned long long pinnedZoomFrameDuringZoomFactorChanges;
@property (nonatomic) long long level;
@property (nonatomic) long long maxZoomedWindowLevel;
@property (nonatomic) struct CGSize { double width; double height; } minimumSize;

+ (id)keyPathsForValuesAffectingframe;
+ (long long)_getNextAvailableZoomWindowNumber;
+ (id)keyPathsForValuesAffectingCenter;
+ (id)keyPathsForValuesAffectingIsZoomed;
+ (id)keyPathsForValuesAffectingSize;
+ (id)keyPathsForValuesAffectingZoomedRegionCenter;
+ (id)keyPathsForValuesAffectingZoomedRegionFrame;
+ (id)keyPathsForValuesAffectingZoomedRegionSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)hide;
- (void)show;
- (id)initWithMaxZoomedWindowLevel:(long long)a0;
- (char)_setJustFullscreen:(char)a0;
- (char)_setJustZoomFactor:(double)a0;
- (char)_setJustZoomWindowFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)_setJustZoomedRegionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTrustedForObscuring;
- (void)_updateLastestZoomWindowParameter;
- (void)_updateMagicZoomWindow;
- (void)beginNonDrawingTransaction;
- (void)endNonDrawingTransaction;
- (void)frameDidChange;
- (id)initWithReferenceWindow:(id)a0;
- (id)initWithZoomWindowNumber:(long long)a0 referenceWindow:(id)a1;
- (void)levelDidChange;
- (void)redraw;

@end
