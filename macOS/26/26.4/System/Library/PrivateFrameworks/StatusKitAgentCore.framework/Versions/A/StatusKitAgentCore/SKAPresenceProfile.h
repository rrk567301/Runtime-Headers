@class NSString, SKAProfilePushTopic;

@interface SKAPresenceProfile : NSObject {
    void /* unknown type, empty encoding */ profileType;
    void /* function */ identifierPrefix;
    void /* unknown type, empty encoding */ channelType;
    void /* unknown type, empty encoding */ options;
    void /* unknown type, empty encoding */ serverObservableAdopterName;
    void /* unknown type, empty encoding */ useCaseName;
    void /* function */ idsFirewallServiceName;
    void /* unknown type, empty encoding */ _serverBackingStore;
    void /* unknown type, empty encoding */ _presenceProtocolVersion;
    void /* unknown type, empty encoding */ _persistentProtocolVersion;
}

@property (nonatomic, readonly) BOOL usePersistence;
@property (nonatomic, readonly) BOOL useSubscriptionCache;
@property (nonatomic, readonly) BOOL ignoreSecurityCheckForInvitations;
@property (nonatomic, readonly) BOOL usesSyncLayer;
@property (nonatomic, readonly) BOOL supportsServerRoutablePayload;
@property (nonatomic, readonly) BOOL supportsPersistentPayloads;
@property (nonatomic, readonly) int channelOwnershipType;
@property (nonatomic, readonly) NSString *identifierPrefix;
@property (nonatomic, readonly) BOOL isPersonal;
@property (nonatomic, readonly) BOOL isCrossAccount;
@property (nonatomic, readonly) SKAProfilePushTopic *pushTopic;
@property (nonatomic, readonly) NSString *pushTopicString;
@property (nonatomic, readonly) NSString *serverObservableAdopterNameString;
@property (nonatomic, readonly) NSString *useCaseNameString;
@property (nonatomic, readonly) int subscribedFilterState;
@property (nonatomic, readonly) long long maxPresencePayloadSize;
@property (nonatomic, readonly) long long maxPersistentPayloadSize;
@property (nonatomic, readonly) double presenceTTLSeconds;
@property (nonatomic, readonly) NSString *idsFirewallServiceName;
@property (nonatomic, readonly) long long presenceProtocolVersion;
@property (nonatomic, readonly) long long persistentProtocolVersion;
@property (nonatomic, readonly) NSString *description;

+ (BOOL)supportsNewPayloadWithVersion:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)supportsCompressionWithPayloadType:(long long)a0;

@end
