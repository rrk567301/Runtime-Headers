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

- (BOOL)isEqual:(id)a0;
- (id)description;
- (double)restingHeightForFullScreen:(BOOL)a0;
- (double)revealedHeightForFullScreen:(BOOL)a0;
- (double)layoutHeightForFullScreen:(BOOL)a0;
- (double)layoutHeightForcingRevealForFullScreen:(BOOL)a0;
- (id)_initWithDisplayID:(int)a0;

@end
