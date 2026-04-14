@interface NSSmallOverlayScrollerImp : NSOverlayScrollerImp

+ (double)scrollerWidth;

- (unsigned long long)controlSize;
- (double)trackEndInset;
- (double)knobMinLength;
- (double)trackSideInset;
- (double)_expandedTrackWidth;
- (double)trackOverlapEndInset;
- (double)knobInset;
- (double)_contractedTrackWidth;

@end
