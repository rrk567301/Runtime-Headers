@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSError;

@interface SNConnectionInfoInternal : NSObject {
    void /* unknown type, empty encoding */ connectionConfiguration;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ policy;
@property (nonatomic, retain) void /* unknown type, empty encoding */ policyRoute;
@property (nonatomic) long long connectionProtocolTechnology;
@property (nonatomic) long long communicationProtocolTechnology;
@property (nonatomic, copy) NSString *assistantIdentifier;
@property (nonatomic, copy) NSString *peerAssistantIdentifier;
@property (nonatomic, copy) NSString *connectionId;
@property (nonatomic, copy) NSString *aceHost;
@property (nonatomic, copy) NSString *languageCode;
@property (nonatomic) char prefersWWAN;
@property (nonatomic) char skipPeer;
@property (nonatomic) char useWiFiHint;
@property (nonatomic, copy) NSError *skipPeerErrorReason;
@property (nonatomic) char forceReconnect;
@property (nonatomic) double timeout;
@property (nonatomic) char imposePolicyBan;
@property (nonatomic, retain) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, retain) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic) char forceOnDeviceOnlyDictation;
@property (nonatomic, copy) NSString *productTypePrefix;
@property (nonatomic, copy) NSString *peerType;
@property (nonatomic, copy) NSString *peerVersion;
@property (nonatomic) char deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) char usesProxyConnection;
@property (nonatomic) char usesPeerManagedSync;

- (id)init;
- (void).cxx_destruct;

@end
