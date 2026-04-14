@class NSUUID, NSXPCConnection, FMXPCServiceDescription, NSObject;
@protocol OS_dispatch_queue;

@interface FMXPCSession : NSObject

@property (retain, nonatomic) id _proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) FMXPCServiceDescription *serviceDescription;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) id proxy;

- (void)invalidate;
- (void)suspend;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithServiceDescription:(id)a0;
- (id)syncProxyWithErrorHandler:(id /* block */)a0;
- (void)destroyXPCConnection;
- (void)dealloc;

@end
