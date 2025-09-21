@class VideoAttributes, NSString, NSData;

@interface VCRemoteVideoState : NSObject

@property BOOL hasReceivedFirstFrame;
@property BOOL isVideoPaused;
@property BOOL isMediaStalled;
@property BOOL isVideoDegraded;
@property BOOL isVideoSuspended;
@property BOOL isNetworkDegraded;
@property BOOL isLocalNetworkDegraded;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;
@property (copy, nonatomic) NSString *localInterfaceType;
@property (copy, nonatomic) NSString *remoteInterfaceType;
@property (copy, nonatomic) NSData *sensitivityAnalysisData;

- (void)dealloc;
- (id)description;

@end
