@class NSString, NSMutableArray;

@interface NEPathControllerNetworkAgent : NENetworkAgent {
    char updateClientsImmediately;
    id /* block */ _internalAssertHandler;
    id /* block */ _internalUnassertHandler;
}

@property (retain) NSMutableArray *predictedInterfaceArray;
@property (retain) NSMutableArray *advisoryInterfaceArray;
@property (retain) NSString *advisoryAgentDomain;
@property (retain) NSString *advisoryAgentType;
@property char weakAdvisory;
@property char noAdvisoryTimer;
@property char preferAdvisory;
@property (nonatomic) char isForcedAdvisory;

+ (id)agentFromData:(id)a0;
+ (id)agentType;

- (void).cxx_destruct;
- (char)assertAgentWithOptions:(id)a0;
- (id)copyAgentData;
- (void)unassertAgentWithOptions:(id)a0;
- (char)updateClientsImmediately;
- (id)initWithAdvisoryAgentDomain:(id)a0 agentType:(id)a1 advisoryMode:(unsigned long long)a2;
- (id)initWithAdvisoryInterface:(id)a0 advisoryMode:(unsigned long long)a1;
- (void)setAssertHandler:(id /* block */)a0;
- (void)setUnassertHandler:(id /* block */)a0;
- (void)setUpdateClientsImmediately:(char)a0;

@end
