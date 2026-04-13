@class NSMutableArray, NSObject;
@protocol OS_os_log;

@interface MFSoundPlayList : NSObject {
    NSMutableArray *_soundsToPlay;
    BOOL _playingSound;
}

@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

+ (void)addSound:(id)a0 playImmediately:(BOOL)a1;
+ (id)_playList;

- (id)init;
- (void).cxx_destruct;
- (void)_playSound;
- (void)_addSound:(id)a0 playImmediately:(BOOL)a1;
- (void)_playNextSound;

@end
