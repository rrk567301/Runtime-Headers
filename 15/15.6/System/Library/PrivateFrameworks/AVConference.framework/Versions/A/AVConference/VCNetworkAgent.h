@class NSString, NSUUID;

@interface VCNetworkAgent : NSObject <NWNetworkAgent> {
    int _assertionRefCount;
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

+ (id)sharedInstance;
+ (id)agentDomain;
+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void)dealloc;
- (id)init;
- (id)copyAgentData;
- (void)removeAssertion;
- (void)addAssertion;
- (char)addMediaInformationAssertion:(id)a0;
- (char)clearMediaInformationAssertion;
- (int)getNetworkAgentRefCount;
- (const char *)textString:(id)a0;
- (unsigned long long)textStringLength:(id)a0;

@end
