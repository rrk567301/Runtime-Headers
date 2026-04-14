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
+ (int)newRegistrationFileDescriptor;
+ (BOOL)removeActiveAssertionFromNetworkAgent:(id)a0;
+ (BOOL)addActiveAssertionToNetworkAgent:(id)a0;

- (id)initWithNetworkAgentClass:(Class)a0;
- (BOOL)registerNetworkAgent:(id)a0;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (BOOL)assignResolvedEndpoints:(id)a0 toClient:(id)a1;
- (BOOL)setLowWaterMark:(unsigned int)a0;
- (int)agentFileDescriptor;
- (void)handleMessageFromAgent;
- (BOOL)internalRegisterNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (BOOL)resetError;
- (BOOL)createReadSourceWithRegistrationSocket:(int)a0;
- (BOOL)registerNetworkAgent:(id)a0 withFileDescriptor:(int)a1;
- (int)dupRegistrationFileDescriptor;
- (void).cxx_destruct;
- (BOOL)assignNexusData:(id)a0 toClient:(id)a1;
- (id)initWithNetworkAgentClass:(Class)a0 queue:(id)a1;
- (BOOL)removeNetworkAgentFromInterfaceNamed:(id)a0;
- (BOOL)setRegisteredNetworkAgent:(id)a0 fileDescriptor:(int)a1;
- (BOOL)unregisterNetworkAgent;
- (BOOL)addNetworkAgentToInterfaceNamed:(id)a0;
- (id)initWithNetworkAgentClass:(Class)a0 session:(id)a1;
- (BOOL)unregisterNetworkAgentInternal;
- (BOOL)addToken:(id)a0;
- (id)description;
- (BOOL)assignDiscoveredEndpoints:(id)a0 toClient:(id)a1;
- (void)handleMessageWithType:(unsigned char)a0 payload:(char *)a1 payloadLength:(unsigned int)a2;
- (BOOL)isRegisteredInternal;
- (BOOL)flushTokens;
- (unsigned int)tokenCountWithError:(int *)a0;
- (void)dealloc;
- (BOOL)updateNetworkAgent:(id)a0;

@end
