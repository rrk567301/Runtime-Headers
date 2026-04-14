@class NSString, NSPConfiguration, NSData, NSPAppRule, NSUUID;

@interface NSPNetworkAgent : NSObject <NWNetworkAgent> {
    unsigned char _dataDigest[32];
}

@property (retain) NSData *agentData;
@property (retain) NSPConfiguration *configuration;
@property (retain) NSPAppRule *appRule;
@property (retain) NSData *keybag;
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
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyAgentData;
- (void)parseAgentData;

@end
