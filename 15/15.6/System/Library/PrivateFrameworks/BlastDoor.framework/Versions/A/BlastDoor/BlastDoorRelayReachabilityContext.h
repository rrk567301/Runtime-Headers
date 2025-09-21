@class NSString, NSUUID;

@interface BlastDoorRelayReachabilityContext : NSObject {
    void /* unknown type, empty encoding */ relayReachabilityContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *chatIdentifier;
@property (nonatomic, readonly) long long chatStyle;
@property (nonatomic, readonly) NSString *senderLastAddressedHandle;
@property (nonatomic, readonly) NSUUID *senderLastAddressedSIMID;
@property (nonatomic, readonly) NSString *lastUsedServiceName;
@property (nonatomic, readonly) NSString *serviceOfLastMessage;
@property (nonatomic, readonly) char conversationWasDowngraded;
@property (nonatomic, readonly) char hasConversationHistory;
@property (nonatomic, readonly) char shouldForceServerStatusRefresh;
@property (nonatomic, readonly) char forceMMS;
@property (nonatomic, readonly) char isForPendingConversation;
@property (nonatomic, readonly) char requestPersistentMenu;
@property (nonatomic, readonly) char requestBrandInfo;

- (id)init;
- (void).cxx_destruct;

@end
