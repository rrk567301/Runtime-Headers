@class NSTimer, QLPreviewView;
@protocol QLPreviewSlideshowDelegate;

@interface QLPreviewSlideshow : NSObject {
    NSTimer *_slideshowTimer;
    int _status;
}

@property (retain) QLPreviewView *previewView;
@property id<QLPreviewSlideshowDelegate> delegate;
@property double staticDuration;
@property BOOL running;
@property (readonly) int status;

+ (id)keyPathsForValuesAffectingRunning;

- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_stopTimer;
- (void)_updateSlideshow;
- (void)_stopSlideshow;
- (void)_startSlideshow;
- (void)_slideshowGoToNextItem:(id)a0;
- (void)_slideshowItemPlayedToTheEnd;
- (void)_prepareSlideshowForNextItem;

@end
