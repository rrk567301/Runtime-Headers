@interface TLAlertPlaybackBeginEvent : NSObject

@property (readonly, nonatomic) long long audioSessionReporterID;
@property (readonly, nonatomic, getter=isForMusicPlayback) BOOL forMusicPlayback;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_initWithAudioSessionReporterID:(long long)a0 isForMusicPlayback:(BOOL)a1;

@end
