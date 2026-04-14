@class SFTrack, NSSound, NSString, TLKGridRowView, SearchUIButton, TLKView, NSTrackingArea;

@interface SearchUITrackListCardSectionView : SearchUICardSectionView <NSSoundDelegate>

@property (retain, nonatomic) TLKGridRowView *contentView;
@property (retain, nonatomic) SearchUIButton *playButton;
@property (retain, nonatomic) TLKView *obscuredView;
@property (retain, nonatomic) NSTrackingArea *trackingArea;
@property (retain, nonatomic) SFTrack *track;
@property (retain, nonatomic) NSSound *sound;
@property (nonatomic) BOOL mouseEntered;
@property (nonatomic) BOOL observing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)removeFromSuperview;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (void)viewDidHide;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (BOOL)stopPlaying;
- (id)setupContentView;
- (void)updateWithRowModel:(id)a0;
- (void)togglePlaying:(id)a0;
- (void)otherSoundWillStart:(id)a0;
- (void)showPlayButton:(BOOL)a0;
- (void)cleanupAfterPlaying;
- (void)viewClosed;

@end
