@interface NSRegularOverlayScrollerImp : NSOverlayScrollerImp

+ (double)scrollerWidth;

- (unsigned long long)controlSize;
- (double)_expandedTrackWidth;
- (double)trackSideInset;
- (double)trackEndInset;
- (double)knobMinLength;
- (double)trackOverlapEndInset;
- (double)knobInset;
- (double)_contractedTrackWidth;

@end
