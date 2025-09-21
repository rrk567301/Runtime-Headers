@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSError, SNConnectionInfoInternal;

@interface SNConnectionInfo : NSObject

@property (retain, nonatomic) SNConnectionInfoInternal *underlyingConnectionInfo;
@property (nonatomic) long long connectionProtocolTechnology;
@property (nonatomic) long long communicationProtocolTechnology;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *connectionId;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) char prefersWWAN;
@property (nonatomic) char skipPeer;
@property (nonatomic) char useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerErrorReason;
@property (nonatomic) char forceReconnect;
@property (nonatomic) double timeout;
@property (nonatomic) char imposePolicyBan;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (nonatomic, getter=isForceOnDeviceOnlyDictationEnabled) char forceOnDeviceOnlyDictation;
@property (copy, nonatomic) NSString *productTypePrefix;
@property (copy, nonatomic) NSString *peerType;
@property (copy, nonatomic) NSString *peerVersion;
@property (nonatomic) char deviceIsInWalkaboutExperimentGroup;
@property (nonatomic) char usesProxyConnection;
@property (nonatomic) char usesPeerManagedSync;

- (id)init;
- (void).cxx_destruct;

@end
