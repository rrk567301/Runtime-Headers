@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) long long stationID;
@property (readonly, nonatomic) NSString *stationStringID;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;
- (char)verifyWithError:(id *)a0;

@end
