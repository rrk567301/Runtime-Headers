@class NSDictionary;

@interface RCSEncryptionDowngradeHandler : NSObject <IMDRelayPushHandlerListener, IMServiceReachabilityResponseHandler> {
    void /* function */ requestIDToResultMap;
    void /* function */ requestIDToChatMap;
}

@property (nonatomic, copy) NSDictionary *requestIDToResultMap;
@property (nonatomic, copy) NSDictionary *requestIDToChatMap;

+ (id)sharedHandler;

- (void)handler:(id)a0 outgoingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 storageContext:(id)a8;
- (void).cxx_destruct;
- (id)init;
- (void)reachabilityRequest:(id)a0 updatedWithResult:(id)a1;
- (void)addResultForMessageGUID:(id)a0 result:(id)a1;
- (void)startMonitoringMessageGUID:(id)a0 chat:(id)a1 sentToDevices:(id)a2;

@end
