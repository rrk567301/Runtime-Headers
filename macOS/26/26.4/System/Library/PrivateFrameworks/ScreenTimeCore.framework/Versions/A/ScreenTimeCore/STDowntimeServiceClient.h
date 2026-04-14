@class NSXPCConnection;

@interface STDowntimeServiceClient : NSObject

@property (retain) NSXPCConnection *connection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isDowntimeEnabledForUserID:(id)a0;
- (void)toggleOnDemandDowntimeForUserID:(id)a0 completionHandler:(id /* block */)a1;

@end
