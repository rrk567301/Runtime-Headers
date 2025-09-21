@class NSUUID, NSString, NSObject;
@protocol NENetworkAgentErrorDelegate;

@interface NENetworkAgent : NSObject <NWNetworkAgent, NENetworkAgentErrorDelegate> {
    int _internalSessionType;
    NSUUID *_internalUUID;
    NSString *_name;
    id /* block */ _internalStartHandler;
    NSObject<NENetworkAgentErrorDelegate> *_delegate;
}

@property (readonly, copy) NSUUID *configurationUUID;
@property (copy) NSString *configurationName;
@property (readonly) int sessionType;
@property int lastStatus;
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
- (void)setStartHandler:(id /* block */)a0;
- (id)copyAgentData;
- (char)reportError:(int)a0 withOptions:(id)a1;
- (char)startAgentWithOptions:(id)a0;
- (id)initWithConfigUUID:(id)a0 sessionType:(int)a1 name:(id)a2;
- (id)initWithDelegate:(id)a0 configUUID:(id)a1 sessionType:(int)a2 name:(id)a3;
- (char)matchesFileHandle:(id)a0;

@end
