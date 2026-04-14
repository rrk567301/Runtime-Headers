@class NSTimer, _NSAcceleratorButtonHelper;

@interface _NSSegmentedCellAuxiliary : NSObject {
    _NSAcceleratorButtonHelper *_acceleratorHelper;
    unsigned long long _segmentTrackingRectCount;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } segmentFrameOfTrackedCell;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *segmentTrackingRects;
@property unsigned long long segmentTrackingRectCount;
@property BOOL sendSelectionAction;
@property (retain) NSTimer *menuTimer;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } delayedMenuTrackingRect;
@property BOOL sendActionOnGasPedal;
@property BOOL acceleratorPressBegan;
@property BOOL lastGasPedalActionWasHighlighted;
@property BOOL alsoWantsMenuTracking;
@property BOOL needsFauxMouseUp;
@property double gasPedalDoubleValue;
@property (copy) id /* block */ delayedMenuPostHandler;

- (void)dealloc;
- (id)init;

@end
