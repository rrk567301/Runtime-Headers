@class NSString;

@interface PFVideoComplementMetadataRecord : NSObject

@property (copy) NSString *pairingIdentifier;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } videoDuration;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } imageDisplayTime;
@property (readonly) char hasValidPairingIdentifier;
@property (readonly) char hasValidVideoDuration;
@property (readonly) char hasValidImageDisplayTime;

- (void).cxx_destruct;

@end
