@class NSXPCConnection;

@interface STDowntimeServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isDowntimeEnabledForUserID:(id)a0;
- (void)toggleOnDemandDowntimeForUserID:(id)a0 completionHandler:(id /* block */)a1;

@end
