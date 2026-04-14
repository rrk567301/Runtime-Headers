@class NSString, NSUUID, IDSNWQPodParameters;

@interface _IDSDataChannelLinkConnection : NSObject

@property (retain) NSString *type;
@property (retain) NSUUID *childConnectionID;
@property (retain) NSString *protocolStack;
@property unsigned long long nwConnectionID;
@property unsigned long long clientNWConnectionID;
@property (retain) NSString *nwConnectionToken;
@property (retain) IDSNWQPodParameters *qpodParameters;
@property BOOL allowOutgoing;
@property BOOL isQUICPod;
@property long long packetLogHandle;

- (id)description;
- (void).cxx_destruct;

@end
