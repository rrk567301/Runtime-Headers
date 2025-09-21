@class NSUUID, NWNetworkAgentSession, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, NWNetworkAgent;

@interface NWNetworkAgentRegistration : NSObject

@property Class networkAgentClass;
@property (retain) NSObject<NWNetworkAgent> *networkAgent;
@property (retain) NSUUID *registeredUUID;
@property int registrationSocket;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (retain) NWNetworkAgentSession *session;
@property (readonly, nonatomic, getter=isRegistered) char registered;
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

+ (char)useNetworkAgent:(id)a0 returnUseCount:(unsigned long long *)a1;
+ (char)addActiveAssertionToNetworkAgent:(id)a0;
+ (int)newRegistrationFileDescriptor;
+ (char)removeActiveAssertionFromNetworkAgent:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (char)resetError;
- (char)addNetworkAgentToInterfaceNamed:(id)a0;
- (char)addToken:(id)a0;
- (int)agentFileDescriptor;
- (char)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;
- (char)assignNexusData:(id)a0 toClient:(id)a1;
- (char)assignResolvedEndpoints:(id)a0 toClient:(id)a1;
- (char)createReadSourceWithRegistrationSocket:(int)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(char)a1;
- (int)dupRegistrationFileDescriptor;
- (char)flushTokens;
- (void)handleMessageFromAgent;
- (void)handleMessageWithType:(unsigned char)a0 payload:(char *)a1 payloadLength:(unsigned int)a2;
- (id)initWithNetworkAgentClass:(Class)a0;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (id)initWithNetworkAgentClass:(Class)a0 session:(id)a1;
- (char)internalRegisterNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (char)isRegisteredInternal;
- (char)registerNetworkAgent:(id)a0;
- (char)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (char)removeNetworkAgentFromInterfaceNamed:(id)a0;
- (char)setLowWaterMark:(unsigned int)a0;
- (char)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (unsigned int)tokenCountWithError:(int *)a0;
- (char)unregisterNetworkAgent;
- (char)unregisterNetworkAgentInternal;
- (char)updateNetworkAgent:(id)a0;

@end
