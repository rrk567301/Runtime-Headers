@class NWPath, NWParameters, NSError, NWConcrete_nw_connection, NWEndpoint;

@interface NWConnection : NSObject

@property long long internalConnectionState;
@property char internalIsViable;
@property char internalHasBetterPath;
@property (retain) NSError *internalError;
@property (retain) NWPath *internalPath;
@property (readonly, nonatomic) unsigned int tlsConnectionTime;
@property (retain, nonatomic) NWConcrete_nw_connection *internalConnection;
@property (readonly, nonatomic) NWPath *currentPath;
@property (readonly, nonatomic) NWEndpoint *endpoint;
@property (readonly, nonatomic) NWParameters *parameters;
@property (readonly, nonatomic) long long connectionState;
@property (readonly, nonatomic) NWEndpoint *connectedLocalEndpoint;
@property (readonly, nonatomic) NWEndpoint *connectedRemoteEndpoint;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isViable) char viable;
@property (readonly, nonatomic) char hasBetterPath;

+ (char)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)connectionWithConnectedSocket:(int)a0;
+ (id)connectionWithEndpoint:(id)a0 parameters:(id)a1;
+ (id)connectionWithInternalConnection:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (id)copyCurrentPath;
- (void)cancelCurrentEndpoint;
- (id)copyError;
- (void)forceCancel;
- (int)getConnectedSocket;
- (id)initWithConnectedSocket:(int)a0;
- (id)initWithEndpoint:(id)a0 parameters:(id)a1;
- (id)initWithInternalConnection:(id)a0;

@end
