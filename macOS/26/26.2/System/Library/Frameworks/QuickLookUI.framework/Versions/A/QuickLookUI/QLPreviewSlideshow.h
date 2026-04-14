@class NSTimer, QLPreviewView;
@protocol QLPreviewSlideshowDelegate;

@interface QLPreviewSlideshow : NSObject {
    NSTimer *_slideshowTimer;
    int _status;
}

@property (retain) QLPreviewView *previewView;
@property (weak) id<QLPreviewSlideshowDelegate> delegate;
@property double staticDuration;
@property BOOL running;
@property (readonly) int status;

+ (id)keyPathsForValuesAffectingRunning;

- (void)_stopTimer;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_stopSlideshow;
- (void)_updateSlideshow;
- (void)_startSlideshow;
- (void)_prepareSlideshowForNextItem;
- (void)_slideshowGoToNextItem:(id)a0;
- (void)_slideshowItemPlayedToTheEnd;

@end
