@class VideoAttributes, NSString;

@interface VCRemoteVideoState : NSObject

@property char hasReceivedFirstFrame;
@property char isVideoPaused;
@property char isMediaStalled;
@property char isVideoDegraded;
@property char isVideoSuspended;
@property char isNetworkDegraded;
@property char isLocalNetworkDegraded;
@property (retain) VideoAttributes *remoteScreenAttributes;
@property (retain) VideoAttributes *remoteVideoAttributes;
@property (copy, nonatomic) NSString *localInterfaceType;
@property (copy, nonatomic) NSString *remoteInterfaceType;

- (void)dealloc;
- (id)description;

@end
