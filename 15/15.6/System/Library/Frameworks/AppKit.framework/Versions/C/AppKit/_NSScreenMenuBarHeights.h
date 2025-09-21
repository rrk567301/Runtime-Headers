@interface _NSScreenMenuBarHeights : NSObject {
    double _restingHeight;
    double _revealedHeight;
    double _layoutHeight;
    double _layoutHeightForcingReveal;
    double _restingHeightIgnoringFullScreen;
    double _revealedHeightIgnoringFullScreen;
    double _layoutHeightIgnoringFullScreen;
    double _layoutHeightForcingRevealIgnoringFullScreen;
}

- (id)description;
- (char)isEqual:(id)a0;
- (id)_initWithDisplayID:(int)a0;
- (double)layoutHeightForFullScreen:(char)a0;
- (double)layoutHeightForcingRevealForFullScreen:(char)a0;
- (double)restingHeightForFullScreen:(char)a0;
- (double)revealedHeightForFullScreen:(char)a0;

@end
