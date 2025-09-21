@interface TLAlertPlaybackBeginEvent : NSObject

@property (readonly, nonatomic) long long audioSessionReporterID;
@property (readonly, nonatomic, getter=isForMusicPlayback) BOOL forMusicPlayback;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAudioSessionReporterID:(long long)a0 isForMusicPlayback:(BOOL)a1;

@end
