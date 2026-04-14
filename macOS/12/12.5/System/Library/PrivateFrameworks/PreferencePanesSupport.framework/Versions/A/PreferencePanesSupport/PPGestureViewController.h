@class NSURL, NSMutableDictionary, AVPlayer, NSImageView, NSMutableArray, PPGesture, PPGestureRow, AVURLAsset, NSArray, NSView, PPGestureView, NSTextField, NSTrackingArea;

@interface PPGestureViewController : NSObject {
    AVPlayer *mAVPlayer;
    AVURLAsset *mAVAsset;
    BOOL mPlayMovieWhenReady;
    NSArray *mChapters;
    NSMutableArray *mPlayingChapters;
    long long mPlayingChapterIndex;
    NSMutableDictionary *mAVPlayerObserverDict;
    NSView *mMoviewView;
    NSTextField *mMoviewNotes;
    NSImageView *mMoviewViewPlaceholder;
    NSTrackingArea *mGestureTableTrackingArea;
    PPGestureRow *mSelectedGestureRow;
    BOOL mDidRegisterForFirstResponder;
    id /* block */ mChapterPlaybackCompleteBlock;
    id /* block */ mUserDidSelectGestureBlock;
}

@property BOOL useNewUI;
@property (retain) NSURL *compositeMovieURL;
@property long long selectionType;
@property (readonly) PPGesture *selectedGesture;
@property (readonly) NSArray *gestureRowsArray;
@property (readonly) PPGestureView *gestureTableView;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)awakeFromNib;
- (void)setSelectionType:(long long)a0;
- (long long)selectionType;
- (void)_hitTestWithEvent:(id)a0;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (void)_popUpButtonWillPopUpNotification:(id)a0;
- (void)_startMovie;
- (BOOL)_selectGestureRow:(id)a0 animate:(BOOL)a1;
- (void)_refreshMovieForGestureNotification:(id)a0;
- (void)selectGesture:(id)a0 animate:(BOOL)a1;
- (void)updateTrackingArea;
- (void)_selectGestureRow:(id)a0;
- (id)compositeMovieURL;
- (void)setGesturesArray:(id)a0;
- (BOOL)hasGesture:(id)a0;
- (void)selectGesture:(id)a0;
- (id)selectedGesture;
- (void)setMoviePlaceHolderImage:(id)a0;
- (void)setAVAsset:(id)a0;
- (void)setPlaybackCompleteBlock:(id /* block */)a0;
- (void)setUserDidSelectGestureBlock:(id /* block */)a0;

@end
