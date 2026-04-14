@class NSMutableDictionary;

@interface NSToolbarItemGroupPickerExpandedViewCell : NSSegmentedCell {
    NSMutableDictionary *_segmentsWithoutDelays;
}

- (void).cxx_destruct;
- (id)init;
- (double)_menuDelayTimeForSegment:(long long)a0;
- (BOOL)hasMenuDelayForSegment:(long long)a0;
- (void)setHasMenuDelay:(BOOL)a0 forSegment:(long long)a1;

@end
