@class NSString, NSXPCConnection, NSURL, NSSet;

@interface CXXPCVoicemailSource : CXVoicemailSource

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;

- (BOOL)isPermittedToUsePrivateAPI;
- (id)identifier;
- (int)processIdentifier;
- (BOOL)isConnected;
- (id)vendorProtocolDelegate;
- (id)init;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
