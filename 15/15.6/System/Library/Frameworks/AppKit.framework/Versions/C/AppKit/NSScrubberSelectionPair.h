@class NSScrubberContainerView;

@interface NSScrubberSelectionPair : NSObject

@property long long itemIndex;
@property char containsCustomViews;
@property (retain) NSScrubberContainerView *backgroundView;
@property (retain) NSScrubberContainerView *overlayView;
@property (readonly) double preferredItemCornerRadius;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)_forEachContainer:(id /* block */)a0;
- (void)addToSuperview:(id)a0 initiallyVisible:(char)a1;
- (void)applyLayoutAttributes:(id)a0 relativeToContentView:(id)a1;
- (id)currentSuperview;
- (id)initWithBackgroundView:(id)a0 overlayView:(id)a1;
- (char)isSubviewOfSuperview:(id)a0;
- (void)removeFromViewHierarchy;
- (void)setContainerAlphaValue:(double)a0;
- (void)setSelected:(char)a0 highlighted:(char)a1;

@end
