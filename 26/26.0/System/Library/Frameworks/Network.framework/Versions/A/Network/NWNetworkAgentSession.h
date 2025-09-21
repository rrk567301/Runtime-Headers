@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NWNetworkAgentSession : NSObject

@property int sessionFD;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSObject<OS_dispatch_source> *readSource;
@property (retain) NSMutableArray *registrations;

- (id)initWithQueue:(id)a0;
- (void)dealloc;
- (id)initWithFileDescriptor:(int)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)setupReadSource;
- (void)addRegistration:(id)a0;
- (int)dupSessionFileDescriptor;
- (id)initWithFileDescriptor:(int)a0 queue:(id)a1;
- (void)readMessageFromFD;
- (id)registrationForAgentUUID:(id)a0;
- (void)removeRegistration:(id)a0;
- (BOOL)sessionFileDescriptorIsValid;
- (void)unregisterAll;

@end
