@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSError;

@interface SNConnectionInfoInternal : NSObject {
    void /* unknown type, empty encoding */ connectionConfiguration;
}

@property (nonatomic, retain) SAConnectionPolicy *policy;
@property (nonatomic, retain) SAConnectionPolicyRoute *policyRoute;
@property (nonatomic) long long connectionProtocolTechnology;
@property (nonatomic) long long communicationProtocolTechnology;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) BOOL prefersWWAN;
@property (nonatomic) BOOL skipPeer;
@property (nonatomic) BOOL useWiFiHint;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) BOOL forceReconnect;
@property (nonatomic) double timeout;
@property (nonatomic) BOOL imposePolicyBan;
@property (nonatomic, retain) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, retain) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic) BOOL forceOnDeviceOnlyDictation;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic) BOOL deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) BOOL usesProxyConnection;
@property (nonatomic) BOOL usesPeerManagedSync;

- (id)init;
- (void).cxx_destruct;

@end
