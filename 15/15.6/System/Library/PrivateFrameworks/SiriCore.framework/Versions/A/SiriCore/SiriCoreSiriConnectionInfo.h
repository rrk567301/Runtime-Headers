@class SAConnectionPolicyRoute, NSString, SAConnectionPolicy, NSURL, NSError;

@interface SiriCoreSiriConnectionInfo : NSObject

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) SAConnectionPolicyRoute *connectionPolicyRoute;
@property (copy, nonatomic) NSString *aceHost;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) char prefersWWAN;
@property (nonatomic) char skipPeer;
@property (nonatomic) char useWiFiHint;
@property (copy, nonatomic) NSError *skipPeerErrorReason;
@property (nonatomic) char forceReconnect;
@property (nonatomic) double timeout;
@property (copy, nonatomic) NSString *assistantIdentifier;
@property (copy, nonatomic) NSString *peerAssistantIdentifier;
@property (copy, nonatomic) NSString *connectionId;
@property (nonatomic) char imposePolicyBan;
@property (nonatomic) char requiresURLSession;
@property (copy, nonatomic) SAConnectionPolicy *connectionPolicy;
@property (nonatomic, getter=isForceOnDeviceOnlyDictationEnabled) char forceOnDeviceOnlyDictation;

- (id)description;
- (void).cxx_destruct;
- (void)_appendPotentiallyNilString:(id)a0 toMutableString:(id)a1;

@end
