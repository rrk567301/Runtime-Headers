@interface NSRegularOverlayScrollerImp : NSOverlayScrollerImp

+ (double)scrollerWidth;

- (unsigned long long)controlSize;
- (double)_contractedTrackWidth;
- (double)_expandedTrackWidth;
- (double)knobInset;
- (double)knobMinLength;
- (double)trackOverlapEndInset;

@end
