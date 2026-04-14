@class NSXPCListenerEndpoint, NSArray, NSUUID, NSXPCConnection, NSExtensionContext;

@interface EXExtensionRequest : NSObject

@property unsigned long long options;
@property (copy) NSArray *inputItems;
@property (retain) NSXPCListenerEndpoint *endpoint;
@property (retain) NSUUID *pkUUID;
@property (retain) id assertion;
@property (retain) NSXPCConnection *xpcConnection;
@property (weak) NSExtensionContext *context;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)applyActiveWebPageAlternativeIfNeededForExtension:(id)a0;

@end
