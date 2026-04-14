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
@property (readonly, nonatomic, getter=isRegistered) BOOL registered;
@property (readonly, nonatomic) unsigned int tokenCount;
@property (nonatomic) unsigned long long useCount;

+ (BOOL)useNetworkAgent:(id)a0 returnUseCount:(unsigned long long *)a1;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)a0;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)a0;
+ (int)newRegistrationFileDescriptor;

- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)initWithNetworkAgentClass:(Class)a0;
- (unsigned int)tokenCountWithError:(int *)a0;
- (BOOL)unregisterNetworkAgentInternal;
- (BOOL)updateNetworkAgent:(id)a0;
- (id)description;
- (id)initWithNetworkAgentClass:(Class)a0 session:(id)a1;
- (BOOL)isRegisteredInternal;
- (BOOL)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (BOOL)assignNexusData:(id)a0 toClient:(id)a1;
- (int)dupRegistrationFileDescriptor;
- (BOOL)assignResolvedEndpoints:(id)a0 toClient:(id)a1;
- (void).cxx_destruct;
- (BOOL)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)a0;
- (BOOL)resetError;
- (BOOL)registerNetworkAgent:(id)a0;
- (void)dealloc;
- (BOOL)internalRegisterNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (BOOL)createReadSourceWithRegistrationSocket:(int)a0;
- (BOOL)flushTokens;
- (int)agentFileDescriptor;
- (void)handleMessageFromAgent;
- (BOOL)unregisterNetworkAgent;
- (void)handleMessageWithType:(unsigned char)a0 payload:(char *)a1 payloadLength:(unsigned int)a2;
- (BOOL)addToken:(id)a0;
- (BOOL)setLowWaterMark:(unsigned int)a0;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)a0;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (BOOL)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;

@end
