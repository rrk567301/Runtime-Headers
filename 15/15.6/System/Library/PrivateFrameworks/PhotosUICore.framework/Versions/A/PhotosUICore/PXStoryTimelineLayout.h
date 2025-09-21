@class NSMutableDictionary, NSIndexSet, PXStoryViewModeTransition, NSString, NSMutableIndexSet, NSMutableOrderedSet, PXStoryTimelineLayoutSnapshot;
@protocol PXStoryTimeline;

@interface PXStoryTimelineLayout : PXGAbsoluteCompositeLayout <PXChangeObserver, PXTapToRadarDiagnosticProvider> {
    struct { unsigned long long needsUpdate; unsigned long long updated; char isPerformingUpdate; char willPerformUpdate; } _updateFlags;
    NSMutableIndexSet *_clipIdentifiers;
    NSMutableOrderedSet *_clipLayoutReuseIdentifiers;
    NSMutableDictionary *_clipLayoutReuseIdentifiersByClipIdentifier;
    char _isUpdatingTimelineContent;
}

@property (readonly, nonatomic) NSIndexSet *supportedResourceKindsForClipLayouts;
@property (readonly, nonatomic) long long viewMode;
@property (readonly, nonatomic) char shouldSetContentSizeToReferenceSize;
@property (retain, nonatomic) id<PXStoryTimeline> displayedTimeline;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } displayedTimeRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } displayedTimelineRect;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } cornerRadius;
@property (nonatomic) struct { union { struct { float topLeft; float topRight; float bottomLeft; float bottomRight; } ; float byIndex[4]; } ; } clipsCornerRadius;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } clippingInsets;
@property (nonatomic) double relativeZPositionAboveLegibilityGradients;
@property (retain, nonatomic) PXStoryViewModeTransition *presentedTimelineTransition;
@property (readonly, nonatomic) PXStoryTimelineLayoutSnapshot *presentedSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_updateContent;
- (void)update;
- (void)didUpdate;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_invalidateContent;
- (long long)_sublayoutIndexForClipWithIdentifier:(long long)a0;
- (void)alphaDidChange;
- (double)alphaForClipLayout:(id)a0;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)a0;
- (void)configureClipLayout:(id)a0;
- (void)didUpdateClipLayout:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)didUpdateTimelineContent;
- (void)displayedTimeRangeDidChange;
- (void)displayedTimelineDidChange;
- (void)displayedTimelineRectDidChange;
- (void)enumerateClipLayouts:(id /* block */)a0;
- (id)existingLayoutForClipWithIdentifier:(long long)a0;
- (double)proposedZPositionForClipLayoutWithClipIdentifier:(long long)a0;
- (void)referenceDepthDidChange;
- (void)referenceSizeDidChange;
- (void)willUpdate;
- (void)willUpdateTimelineContent;

@end
