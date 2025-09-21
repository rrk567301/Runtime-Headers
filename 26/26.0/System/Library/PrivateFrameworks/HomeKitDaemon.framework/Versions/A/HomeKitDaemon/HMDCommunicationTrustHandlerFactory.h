@protocol HMDCommunicationTrustHandlerProtocol;

@interface HMDCommunicationTrustHandlerFactory : NSObject

@property (class, nonatomic, readonly) id<HMDCommunicationTrustHandlerProtocol> sharedHandler;

- (id)init;

@end
