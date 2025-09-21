@class ILMediaObject, AVPlayerItem, NSMutableArray, AVPlayer;

@interface ILMediaBrowserAudioPlayer : NSObject {
    NSMutableArray *fileList;
    AVPlayer *avPlayer;
    AVPlayerItem *mCurrentAudioPlayerItem;
    ILMediaObject *mCurrentAudioMediaObject;
    BOOL _isPlaying;
}

+ (id)_notificationsToObserve;
+ (id)sharedAudioPlayer;

- (void)play:(id)a0;
- (BOOL)isPlaying;
- (void)dealloc;
- (id)init;
- (void)removeAllFiles;
- (void)stop:(id)a0;
- (void)setIsPlaying:(BOOL)a0;
- (id)audioOutputDeviceUniqueID;
- (void)setAudioOutputDeviceUniqueID:(id)a0;
- (void)_observeAtEndNotifications:(id)a0 add:(BOOL)a1;
- (BOOL)_isItemAuthorized:(id)a0;
- (void)addAudioFile:(id)a0;
- (void)addAudioFiles:(id)a0;
- (id)currentAudioFile;
- (void)removeAudioFileAtIndex:(long long)a0;
- (void)setCurrentMediaObject:(id)a0;

@end
