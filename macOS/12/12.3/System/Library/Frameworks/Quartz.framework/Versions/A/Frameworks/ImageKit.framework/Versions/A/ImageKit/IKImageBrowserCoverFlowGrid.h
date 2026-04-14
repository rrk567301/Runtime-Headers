@class NSEvent;

@interface IKImageBrowserCoverFlowGrid : IKImageBrowserFloatingGroupGrid {
    NSEvent *_lastScrollEvent;
    double _scrollVelocity;
    float _scrollPosition;
    float _scrollOffset;
    id _reserved;
    id _currentAnimation;
    struct __CFDictionary { } *_indexToOrderedIndex;
    struct __CFDictionary { } *_indexToVisibleIndex;
    double _cachedOffset;
    unsigned char _cachedOffsetValid : 1;
}

@property double scrollPosition;
@property double scrollOffset;

- (void)dealloc;
- (void)invalidate;
- (double)offset;
- (int)columnCount;
- (struct CGSize { double x0; double x1; })margin;
- (void)scrollIndexToVisible:(long long)a0;
- (void)scrollTo:(int)a0;
- (id)collapsedIndexesWithColumnCount:(unsigned long long)a0;
- (void)animationFinished:(id)a0;
- (double)snapPositionForPosition:(double)a0;
- (BOOL)isInOverflow;
- (void)prepareRenderingOrderingWithIndexes:(id)a0;
- (unsigned long long)indexToRenderForNonOrderedIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })adjustedMargin;
- (double)xAtColumn:(int)a0;
- (int)columnAtX:(double)a0;
- (id)_cellIndexesInRect:(struct { struct { double x0; double x1; } x0; struct { double x0; double x1; } x1; })a0;
- (int)cellIndexAtColumn:(int)a0 andRow:(int)a1;
- (void)removeAnimationIfAny;
- (double)_offsetForIndex:(int)a0;
- (double)scrollPositionWithOverflow;
- (id)clientIndexes;
- (void)_scrollTo:(int)a0 snapMode:(BOOL)a1 initialVelocity:(double)a2;
- (int)offsetIndex;
- (BOOL)coverflowMode;
- (double)translationInColumnAtX:(double)a0;
- (float)rotationAtX:(double)a0;
- (void)prepareCoverflowLayout:(id)a0;
- (double)sideCellsWidth;
- (double)sideCellsMargin;
- (void)flushAnimations;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })dataSourceRange;
- (void)adjustHorizontalOffsetIfNeeded;
- (void)resetHorizontalOffset;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })facingRange;
- (void)scrollWheel:(id)a0 gesture:(BOOL)a1;
- (void)endGesture:(id)a0;
- (int)screenColumnAtIndex:(unsigned long long)a0;
- (int)indexOfHeaderMasterCell;

@end
