@class NSString;

@interface MPRadioStationRemotePlaybackQueue : MPRemotePlaybackQueue

@property (readonly, nonatomic) long long stationID;
@property (readonly, nonatomic) NSString *stationStringID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (BOOL)verifyWithError:(id *)a0;
- (id)description;
- (id)initWithMediaRemotePlaybackQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 options:(id)a1;

@end
