@interface TLAlertPlaybackBeginEvent : NSObject

@property (readonly, nonatomic) long long audioSessionReporterID;
@property (readonly, nonatomic, getter=isForMusicPlayback) BOOL forMusicPlayback;

- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAudioSessionReporterID:(long long)a0 isForMusicPlayback:(BOOL)a1;

@end
