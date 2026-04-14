@class _IDSDataChannelLinkConnection;

@interface _IDSDataChannelLinkConnections : NSObject

@property (retain) _IDSDataChannelLinkConnection *udp;
@property (retain) _IDSDataChannelLinkConnection *qpod;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isQUICPod;

@end
