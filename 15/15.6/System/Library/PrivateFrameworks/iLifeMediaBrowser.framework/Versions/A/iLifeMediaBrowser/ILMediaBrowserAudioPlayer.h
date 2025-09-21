@class ILMediaObject, AVPlayerItem, NSMutableArray, AVPlayer;

@interface ILMediaBrowserAudioPlayer : NSObject {
    NSMutableArray *fileList;
    AVPlayer *avPlayer;
    AVPlayerItem *mCurrentAudioPlayerItem;
    ILMediaObject *mCurrentAudioMediaObject;
    char _isPlaying;
}

+ (id)_notificationsToObserve;
+ (id)sharedAudioPlayer;

- (void)dealloc;
- (id)init;
- (char)isPlaying;
- (void)stop:(id)a0;
- (void)setIsPlaying:(char)a0;
- (id)audioOutputDeviceUniqueID;
- (void)setAudioOutputDeviceUniqueID:(id)a0;
- (void)play:(id)a0;
- (void)_observeAtEndNotifications:(id)a0 add:(char)a1;
- (char)_isItemAuthorized:(id)a0;
- (void)addAudioFile:(id)a0;
- (void)addAudioFiles:(id)a0;
- (id)currentAudioFile;
- (void)removeAllFiles;
- (void)removeAudioFileAtIndex:(long long)a0;
- (void)setCurrentMediaObject:(id)a0;

@end
