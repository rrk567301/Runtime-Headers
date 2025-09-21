@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (id)vendorProtocolDelegate;
- (id)identifier;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isConnected;
- (void)dealloc;
- (id)initWithConnection:(id)a0;
- (int)processIdentifier;
- (id)init;
- (void).cxx_destruct;

@end
