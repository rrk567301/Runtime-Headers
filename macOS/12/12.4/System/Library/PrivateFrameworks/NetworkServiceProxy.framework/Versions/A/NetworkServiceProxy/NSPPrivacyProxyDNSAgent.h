@class NSPPrivacyProxyResolverInfo, NSString, NSUUID, NSObject;
@protocol NSPPrivacyProxyDNSAgentDelegate;

@interface NSPPrivacyProxyDNSAgent : NSObject <NWNetworkAgent>

@property (weak) NSObject<NSPPrivacyProxyDNSAgentDelegate> *delegate;
@property (retain) NSPPrivacyProxyResolverInfo *resolver;
@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isKernelActivated) BOOL kernelActivated;
@property (nonatomic, getter=isUserActivated) BOOL userActivated;
@property (nonatomic, getter=isVoluntary) BOOL voluntary;
@property (nonatomic, getter=isSpecificUseOnly) BOOL specificUseOnly;
@property (nonatomic, getter=isNetworkProvider) BOOL networkProvider;
@property (nonatomic, getter=isNexusProvider) BOOL nexusProvider;
@property (nonatomic) BOOL supportsListenRequests;
@property (nonatomic) BOOL supportsBrowseRequests;
@property (nonatomic) BOOL supportsResolveRequests;
@property (nonatomic) BOOL requiresAssert;
@property (nonatomic) BOOL updateClientsImmediately;

+ (id)agentDomain;
+ (id)agentType;
+ (id)agentFromData:(id)a0;
+ (id)dnsAgentUUID;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (BOOL)reportError:(int)a0 withOptions:(id)a1;
- (id)copyAgentData;

@end
