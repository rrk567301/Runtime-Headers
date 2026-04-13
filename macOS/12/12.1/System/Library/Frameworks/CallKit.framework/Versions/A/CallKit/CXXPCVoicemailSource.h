@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)identifier;
- (int)processIdentifier;
- (BOOL)isConnected;
- (id)vendorProtocolDelegate;
- (BOOL)isPermittedToUsePrivateAPI;

@end
