@class FTCancelRequest, FTFinishAudio, FTAudioPacket, FTStartPronGuessRequest;

@interface FTMutablePronGuessStreamingRequest : FTPronGuessStreamingRequest

@property (nonatomic) long long content_type;
@property (copy, nonatomic) FTStartPronGuessRequest *contentAsFTStartPronGuessRequest;
@property (copy, nonatomic) FTAudioPacket *contentAsFTAudioPacket;
@property (copy, nonatomic) FTFinishAudio *contentAsFTFinishAudio;
@property (copy, nonatomic) FTCancelRequest *contentAsFTCancelRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
