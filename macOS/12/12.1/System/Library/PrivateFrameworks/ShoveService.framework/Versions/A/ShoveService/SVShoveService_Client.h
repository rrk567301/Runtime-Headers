@class NSXPCConnection, NSXPCInterface;
@protocol SVShoveServiceProtocol;

@interface SVShoveService_Client : NSObject <SVShoveServiceEventsListener>

@property (retain) NSXPCInterface *serviceInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *serviceConnection;
@property (retain) id<SVShoveServiceProtocol> serviceProxy;
@property BOOL useSystemService;
@property (copy) id /* block */ loggingBlock;
@property (copy) id /* block */ errorBlock;

+ (id)shoveServiceInterface;
+ (id)shoveServiceEventListenerInterface;

- (void).cxx_destruct;
- (void)errorOccurred:(id)a0;
- (void)connectToService;
- (void)connectionErrorOccurred:(id)a0;
- (void)completedShovingPath:(id)a0;
- (void)log:(id)a0 withSeverity:(long long)a1;
- (void)terminateService;

@end
