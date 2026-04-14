@class NSString, AVMediaSelectionOption, AVMediaSelectionGroup, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ISWrappedMemoriesAppleMusicPlayer : NSObject

@property (retain) NSString *adamID;
@property (retain) AVMediaSelectionOption *withoutMusicMediaOption;
@property (retain) NSError *appleMusicPlayerError;
@property (retain) NSObject<OS_dispatch_queue> *appleMusicPlayerQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *isLoadingAssetSemaphore;
@property BOOL isLoadingAsset;
@property (readonly) AVMediaSelectionGroup *cachedAVMediaSelectionGroup;

+ (BOOL)isFeatureEnabled;

- (void)pause;
- (void)dealloc;
- (void)stop;
- (void)prepareWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)playWithCompletionHandler:(id /* block */)a0;
- (void)_waitForAssetLoadingIfNeccesary;
- (void)_modifyAudioSessionToMixWithOthers;
- (id)appleMusicPlayer;
- (id)initWithPlayerItem:(id)a0 queue:(id)a1;

@end
