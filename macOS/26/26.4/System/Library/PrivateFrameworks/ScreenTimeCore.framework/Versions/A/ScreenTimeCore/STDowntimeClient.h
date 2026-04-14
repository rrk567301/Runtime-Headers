@class NSXPCConnection;

@interface STDowntimeClient : NSObject

@property (readonly) NSXPCConnection *connection;

+ (id)_newConnection;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)isDowntimeEnabledForUserID:(id)a0;
- (void)toggleOnDemandDowntimeForUserID:(id)a0 completionHandler:(id /* block */)a1;

@end
