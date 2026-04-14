@interface TLAlertPlaybackBeginEvent : NSObject

@property (readonly, nonatomic) long long audioSessionReporterID;
@property (readonly, nonatomic, getter=isForMusicPlayback) BOOL forMusicPlayback;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_initWithAudioSessionReporterID:(long long)a0 isForMusicPlayback:(BOOL)a1;

@end
