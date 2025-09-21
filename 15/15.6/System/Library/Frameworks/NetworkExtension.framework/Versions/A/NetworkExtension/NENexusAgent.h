@class NSString, NSUUID, NSObject, NWNetworkAgentRegistration;
@protocol NENexusAgentDelegate;

@interface NENexusAgent : NSObject <NWNetworkAgent> {
    unsigned int _frameType;
    NWNetworkAgentRegistration *_registration;
    NSObject<NENexusAgentDelegate> *_delegate;
}

@property (copy, nonatomic) NSString *agentDescription;
@property (copy, nonatomic) NSUUID *agentUUID;
@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isKernelActivated) char kernelActivated;
@property (nonatomic, getter=isUserActivated) char userActivated;
@property (nonatomic, getter=isVoluntary) char voluntary;
@property (nonatomic, getter=isSpecificUseOnly) char specificUseOnly;
@property (nonatomic, getter=isNetworkProvider) char networkProvider;
@property (nonatomic, getter=isNexusProvider) char nexusProvider;
@property (nonatomic) char supportsListenRequests;
@property (nonatomic) char supportsBrowseRequests;
@property (nonatomic) char supportsResolveRequests;
@property (nonatomic) char requiresAssert;
@property (nonatomic) char updateClientsImmediately;

+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (char)assertAgentWithOptions:(id)a0;
- (void)closeNexusWithOptions:(id)a0;
- (id)copyAgentData;
- (char)requestNexusWithOptions:(id)a0;
- (char)startAgentWithOptions:(id)a0;
- (void)unassertAgentWithOptions:(id)a0;

@end
