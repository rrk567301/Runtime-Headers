@class HMDRemoteMessageTransport, HMFMessageDispatcher;

@interface HMDModernMessagingHandlerContext : NSObject

@property (retain, nonatomic) HMDRemoteMessageTransport *modernTransport;
@property (retain, nonatomic) HMFMessageDispatcher *messageDispatcher;

- (void).cxx_destruct;
- (id)initForRequestID:(id)a0 accountRegistry:(id)a1;
- (id)initWithTransport:(id)a0 messageDispatcher:(id)a1;

@end
