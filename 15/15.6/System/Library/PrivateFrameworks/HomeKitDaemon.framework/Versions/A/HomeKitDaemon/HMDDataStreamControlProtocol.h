@class NSString, NSNumber;

@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>

@property (readonly, copy) NSString *logIdentifier;
@property (retain, nonatomic) NSNumber *pendingHelloMessageIdentifier;
@property (nonatomic) char helloMessageResponseReceived;
@property (nonatomic) char controlHandshakeComplete;
@property (retain, nonatomic) NSNumber *peerDataStreamProtocolVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isActive) char active;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithLogIdentifier:(id)a0;
- (void)_sendHelloMessageOnDataStream:(id)a0;
- (void)_sendVersionRequestOnDataStream:(id)a0;
- (void)dataStream:(id)a0 didFailWithError:(id)a1;
- (void)dataStream:(id)a0 didReceiveEvent:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveRequest:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStream:(id)a0 didReceiveResponse:(id)a1 header:(id)a2 payload:(id)a3;
- (void)dataStreamDidClose:(id)a0;
- (void)dataStreamDidOpen:(id)a0;
- (void)dataStreamInitiatedClose:(id)a0;
- (char)isExpectedHelloControlMessage:(id)a0 header:(id)a1;

@end
