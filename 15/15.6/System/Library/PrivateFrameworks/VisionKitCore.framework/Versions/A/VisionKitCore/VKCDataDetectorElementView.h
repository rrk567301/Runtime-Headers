@class VKCBaseDataDetectorElement, NSBezierPath, CAShapeLayer, NSArray, VKQuad, VKCMRCDataDetectorElement, NSString;
@protocol VKCDataDetectorElementViewDelegate;

@interface VKCDataDetectorElementView : VKPlatformView <NSAccessibilityButton>

@property (nonatomic) int analysisRequestID;
@property (retain, nonatomic) CAShapeLayer *highlightPathLayer;
@property (retain, nonatomic) NSBezierPath *highlightPath;
@property (readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property (readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
@property (readonly, nonatomic) double lineWithForAverageSubquadHeight;
@property (readonly, nonatomic) char shouldUseBCSAction;
@property (readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property (nonatomic) char isPerformingManualContextInvocation;
@property (nonatomic) char allowLongPressDDActivationOnly;
@property (weak, nonatomic) id<VKCDataDetectorElementViewDelegate> delegate;
@property (copy, nonatomic) NSString *customAnalyticsIdentifier;
@property (readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement;
@property (readonly, nonatomic) NSArray *allDataDetectorElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (char)accessibilityPerformPress;
- (id)accessibilityValue;
- (char)isAccessibilityElement;
- (id)calcPathForUnderline;
- (id)initWithDataDetectorElement:(id)a0 unfilteredElements:(id)a1;
- (void)updateHighlightPath;

@end
