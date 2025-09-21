@class AVB17221AECPMessage, AVBMACAddress;

@interface AVB17221AECPPendingResponse : NSObject {
    char addedControlRoutingID;
}

@property (copy) AVBMACAddress *destMAC;
@property char responseReceived;
@property (copy) AVB17221AECPMessage *message;
@property (copy) id /* block */ completionHandler;
@property char inProgressReceived;
@property char retried;

- (void).cxx_destruct;

@end
