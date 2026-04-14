@class IMMessagePartChatItem, IMFullScreenEffect, NSTimer, NSString, NSImage;
@protocol IMFullScreenEffectSoundPlayer, IMFullScreenEffectPlayerDelegate;

@interface IMFullScreenEffectPlayer : NSObject <IMFullScreenEffectSoundPlayerDelegate>

@property (weak) NSTimer *effectTimer;
@property (retain) IMFullScreenEffect *fullScreenEffect;
@property (weak) IMMessagePartChatItem *messagePartChatItem;
@property BOOL triggeredByResponseKit;
@property (retain, nonatomic) id<IMFullScreenEffectSoundPlayer> soundPlayer;
@property (retain) NSString *identifier;
@property BOOL isFromMe;
@property double startTime;
@property double endTime;
@property (retain) NSString *languageCode;
@property BOOL wasAborted;
@property (weak) id<IMFullScreenEffectPlayerDelegate> delegate;
@property BOOL shouldRepeat;
@property (retain) NSImage *messageImage;
@property (readonly) BOOL isPlaying;
@property (readonly) BOOL didPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)startTimer;
- (void)_didPrepare;
- (BOOL)_shouldAddFilter:(id)a0 toCell:(id)a1;
- (void)addFullScreenEffectFiltersToCells:(id)a0;
- (void)removeFullScreenEffectFiltersFromCells:(id)a0;
- (void)addFullScreenEffectFilterToTriggeringCell:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStopPlaying:(id)a0;
- (void)fullScreenEffectSoundPlayerDidStartPlaying:(id)a0;
- (void)fullScreenEffectSoundPlayerDidPrepare:(id)a0;
- (void)didStopPlaying;
- (id)createSoundPlayer;
- (id)initWithIdentifier:(id)a0 isFromMe:(BOOL)a1;
- (id)initWithMessagePartChatItem:(id)a0 languageCode:(id)a1;
- (void)didSetFullScreenEffect:(id)a0;
- (void)_setFullScreenEffect:(id)a0;
- (void)loadFullScreenEffect:(id /* block */)a0;
- (void)didAbortPlaying;
- (void)abortPlayingEffect;
- (void)willStartPlaying;
- (void)prepareToPlayEffect;
- (void)startPlayingEffect;
- (void)stopPlayingEffect;

@end
