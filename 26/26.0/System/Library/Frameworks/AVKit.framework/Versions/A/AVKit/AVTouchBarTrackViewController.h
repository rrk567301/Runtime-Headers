@class AVTouchBarTrackView;
@protocol AVTouchBarTrackControlling, AVTimeControlling;

@interface AVTouchBarTrackViewController : NSViewController {
    BOOL _hasRoundedCorners;
}

@property (retain) id<AVTouchBarTrackControlling, AVTimeControlling> playerController;
@property (readonly) AVTouchBarTrackView *touchBarTrackView;
@property BOOL hasRoundedCorners;

+ (id)keyPathsForValuesAffectingTouchBarTrackView;

- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (Class)_trackViewClass;
- (id)thumbnailForTime:(double)a0;

@end
