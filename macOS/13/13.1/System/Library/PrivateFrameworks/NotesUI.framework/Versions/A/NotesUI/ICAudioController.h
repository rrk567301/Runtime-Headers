@class NSObject, AVPlayer, ICAttachment;

@interface ICAudioController : NSObject

@property (retain, nonatomic) AVPlayer *currentPlayer;
@property (retain, nonatomic) ICAttachment *currentAttachment;
@property (retain, nonatomic) NSObject *playbackTimeObserver;
@property (readonly, nonatomic) BOOL isPlaying;

+ (void)pauseIfPlaying;
+ (id)sharedAudioController;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)pause;
- (void)stop;
- (void)play;
- (void)seekToTime:(double)a0;
- (void)play:(id)a0;
- (void)togglePlayPause;
- (void)updateTime:(double)a0 duration:(double)a1;
- (void)attachmentWillBeDeletedNotification:(id)a0;
- (void)skipAheadByInterval:(double)a0;
- (void)skipBackByInterval:(double)a0;
- (void)notifyPlaying;
- (void)notifyPaused;
- (void)notifyStopped;

@end
