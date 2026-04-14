@class NSUserInterfaceCompressionOptions, NSTimer, _NSAcceleratorButtonHelper, NSColor;

@interface _NSSegmentedCellAuxiliary : NSObject {
    _NSAcceleratorButtonHelper *_acceleratorHelper;
    NSColor *_selectedSegmentBezelColor;
    unsigned long long _segmentTrackingRectCount;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } segmentFrameOfTrackedCell;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *segmentTrackingRects;
@property unsigned long long segmentTrackingRectCount;
@property long long highlightedSegment;
@property BOOL sendSelectionAction;
@property (retain) NSTimer *menuTimer;
@property BOOL sendActionOnGasPedal;
@property BOOL lastGasPedalActionWasHighlighted;
@property double gasPedalDoubleValue;
@property BOOL inTouchBar;
@property long long segmentDistribution;
@property (retain) NSUserInterfaceCompressionOptions *compressibleOptions;
@property long long applicableSegmentStyleForCachedContentStyle;
@property long long semanticContextForCachedContentStyle;
@property BOOL usesSlidingStyleForCachedContentStyle;

- (void)dealloc;
- (id)init;

@end
