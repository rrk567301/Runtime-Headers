@class NSSound, SFTrack, NSString;

@interface PRSTrackSliceViewController : PRSSliceViewController <NSSoundDelegate>

@property (retain) NSSound *playingSound;
@property (readonly) SFTrack *track;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (double)height;
- (void)awakeFromNib;
- (void)sound:(id)a0 didFinishPlaying:(BOOL)a1;
- (id)initWithTrack:(id)a0;
- (void)togglePlaying:(id)a0;
- (void)viewClosed;
- (void)startedPlaying:(id)a0;
- (BOOL)handleMouseUp:(id)a0 alternatePunchout:(id)a1;
- (void)setAdditionalHeight:(double)a0;
- (void)syncAttributes;
- (id)trackSliceView;

@end
