@class NSScrollView, ISVisibilityOffsetHelper, NSHashTable, NSDate;

@interface ISScrollViewVitalityController : NSObject

@property (weak, nonatomic, setter=_setScrollView:) NSScrollView *_scrollView;
@property (readonly, nonatomic) NSHashTable *_playerViews;
@property (nonatomic, setter=_setPerformingChanges:) char _isPerformingChanges;
@property (nonatomic, getter=isScrolling) char scrolling;
@property (nonatomic, getter=isDecelerating) char decelerating;
@property (nonatomic) char hasTargetContentOffset;
@property (nonatomic) struct CGPoint { double x; double y; } targetContentOffset;
@property (retain, nonatomic) NSDate *estimatedScrollEndDate;
@property (readonly, nonatomic) ISVisibilityOffsetHelper *visibilityOffsetHelper;
@property (readonly, nonatomic) char canPerformVitality;
@property (nonatomic, getter=isEnabled) char enabled;

- (id)init;
- (void).cxx_destruct;
- (void)performChanges:(id /* block */)a0;
- (id)_newVitalityFilter;
- (void)_updateVitalityFilters;
- (void)addPlayerView:(id)a0;
- (void)canPerformVitalityDidChange;
- (void)didLayoutPlayerViews;
- (void)removePlayerView:(id)a0;

@end
