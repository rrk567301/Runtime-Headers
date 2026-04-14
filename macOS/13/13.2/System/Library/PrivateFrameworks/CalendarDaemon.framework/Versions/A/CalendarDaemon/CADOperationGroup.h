@class ClientConnection;

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn;

+ (BOOL)requiresEventAccess;
+ (id)whitelistedBundles;

- (void).cxx_destruct;
- (BOOL)accessGranted;
- (id)initWithClientConnection:(id)a0;

@end
