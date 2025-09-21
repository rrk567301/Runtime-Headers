@class IMMessagePartChatItem, IMFullScreenEffect, NSTimer, NSString, NSImage;
@protocol IMFullScreenEffectSoundPlayer, IMFullScreenEffectPlayerDelegate;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>

@property (weak) NSTimer *effectTimer;
@property (retain) IMFullScreenEffect *fullScreenEffect;
@property (weak) IMMessagePartChatItem *messagePartChatItem;
@property char triggeredByResponseKit;
@property (retain, nonatomic) id<IMFullScreenEffectSoundPlayer> soundPlayer;
@property (retain) NSString *identifier;
@property char isFromMe;
@property double startTime;
@property double endTime;
@property (retain) NSString *languageCode;
@property char wasAborted;
@property (weak) id<IMFullScreenEffectPlayerDelegate> delegate;
@property char shouldRepeat;
@property (retain) NSImage *messageImage;
@property (readonly) char isPlaying;
@property (readonly) char didPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startTimer;
- (void)stopTimer;
- (void)_didPrepare;
- (void)didAbortPlaying;
- (id)createSoundPlayer;
- (void)didStopPlaying;
- (id)initWithIdentifier:(id)a0 isFromMe:(char)a1;
- (void)willStartPlaying;
- (void)_setFullScreenEffect:(id)a0;
- (char)_shouldAddFilter:(id)a0 toCell:(id)a1;
- (void)abortPlayingEffect;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)a0;
- (void)addFullScreenEffectFiltersToCells:(id)a0;
- (void)didSetFullScreenEffect:(id)a0;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)a0;
- (id)initWithMessagePartChatItem:(id)a0 languageCode:(id)a1;
- (void)loadFullScreenEffect:(id /* block */)a0;
- (void)prepareToPlayEffect;
- (void)removeFullScreenEffectFiltersFromCells:(id)a0;
- (void)startPlayingEffect;
- (void)stopPlayingEffect;

@end
